// Multi Smart Shoes for Safety Purpose - Combined Arduino Code

#include <SoftwareSerial.h>
#include <TinyGPS++.h>

// Ultrasonic Sensor Pins
const int trigPin = 9;
const int echoPin = 10;

// Vibration Motor
const int vibPin = 6;

// GSM & GPS
SoftwareSerial gpsSerial(4, 3); // RX, TX for GPS
SoftwareSerial gsmSerial(7, 8); // RX, TX for GSM
TinyGPSPlus gps;

long duration;
int distance;

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);
  gsmSerial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(vibPin, OUTPUT);

  delay(2000);
  gsmSerial.println("AT");
  delay(1000);
  gsmSerial.println("AT+CMGF=1");
  delay(1000);
}

void loop() {
  // --- Obstacle Detection ---
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 50) {
    digitalWrite(vibPin, HIGH); // Turn on vibration
    delay(500);
    digitalWrite(vibPin, LOW);
    sendAlert(); // Send message with location
  }

  // --- GPS Location Reading ---
  while (gpsSerial.available() > 0) {
    gps.encode(gpsSerial.read());
  }

  delay(1000);
}

void sendAlert() {
  if (gps.location.isValid()) {
    String lat = String(gps.location.lat(), 6);
    String lon = String(gps.location.lng(), 6);

    String message = "Obstacle detected! Location: https://maps.google.com/?q=" + lat + "," + lon;
    gsmSerial.println("AT+CMGS=\"+91XXXXXXXXXX\""); // Replace with actual number
    delay(1000);
    gsmSerial.println(message);
    delay(100);
    gsmSerial.write(26); // ASCII code of CTRL+Z
    delay(5000);
  }
}
