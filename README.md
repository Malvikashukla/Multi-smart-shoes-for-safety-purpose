
# Smart Shoes for Safety Purpose

A wearable embedded system designed for visually impaired individuals to detect nearby obstacles and share real-time GPS location through GSM alerts. This project integrates multiple sensors and modules into a compact, battery-powered smart shoe system.


## Objective

To enhance the mobility and safety of blind or elderly individuals by:
- Detecting nearby obstacles using sensors
- Providing immediate vibration feedback
- Sending real-time GPS location via SMS alerts
- Delivering a portable, low-cost embedded solution

 TECHNOLOGIES USED:

  | Component              | Function / Role                                  |
  |------------------------|--------------------------------------------------|
  | Arduino UNO            | Microcontroller (controls the system)           |
  | Ultrasonic Sensor      | Detects nearby obstacles                         |
  | NEO-6M GPS Module      | Provides real-time location (lat/lon)            |
  | SIM800L GSM Module     | Sends SMS alerts with location                   |
  | HC-05 Bluetooth Module | Sends data to mobile phone via Bluetooth         |
  | Buzzer                 | Gives audible alert when obstacle is detected    |
  | Pressure Sensor        | Detects footstep or user impact                  |
  | Touch Sensor           | Toggles the alert system (on/off switch)         |
  | Power Supply           | External portable power (Battery/Power bank)     

##  Hardware Components

| Component         | Description                              |
|------------------|------------------------------------------|
| Arduino UNO       | Microcontroller (system controller)       |
| Ultrasonic Sensor | Measures distance to detect obstacles     |
| Vibration Motor   | Provides feedback when obstacle detected  |
| GPS Module        | Captures real-time location               |
| GSM Module        | Sends SMS with Google Maps location link  |
| 9V Battery        | Powers the entire wearable system         |
| Shoe              | Embedded all hardware for portability     |



## Pin Configuration

| Module           | Arduino Pin | Purpose                     |
|------------------|-------------|-----------------------------|
| Ultrasonic Trig  | D9          | Trigger output              |
| Ultrasonic Echo  | D10         | Echo input                  |
| Vibration Motor  | D6          | Turns ON during obstacle    |
| GPS RX           | D4          | GPS data into Arduino       |
| GPS TX           | D3          | Arduino data to GPS         |
| GSM RX           | D7          | GSM receive                 |
| GSM TX           | D8          | GSM transmit                |








