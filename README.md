
# Smart Shoes for Safety Purpose

A wearable embedded system designed for visually impaired individuals to detect nearby obstacles and share real-time GPS location through GSM alerts. This project integrates multiple sensors and modules into a compact, battery-powered smart shoe system.


## Objective

To enhance the mobility and safety of blind or elderly individuals by:
- Detecting nearby obstacles using sensors
- Providing immediate vibration feedback
- Sending real-time GPS location via SMS alerts
- Delivering a portable, low-cost embedded solution



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








