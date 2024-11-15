# Railway Crossing Aurduino UNO with Servo and IR Sensor Project

This project demonstrates the use of two IR sensors to control two servo motors and activate different LEDs and a buzzer based on the sensor input.

## Components Used

- **Arduino Board**
- **2 IR Sensors**
- **2 Servo Motors**
- **4 LEDs**
- **1 Buzzer**
- **Connecting Wires**

## Circuit Description

1. **IR Sensors**:
   - `ir1` connected to pin 2.
   - `ir2` connected to pin 7.

2. **Servo Motors**:
   - `myservo1` connected to pin 3.
   - `myservo2` connected to pin 8.

3. **LEDs**:
   - Connected to pins 13, 11, 10, and 9.

4. **Buzzer**:
   - Connected to pin 12.

## Functionality

- **When `ir1` detects an object (LOW):**
  - `myservo1` and `myservo2` are set to 90 degrees.
  - LED on pin 13 and LED on pin 9 are turned ON.
  - LED on pins 11 and 10 are turned OFF.
  - Buzzer on pin 12 is turned ON.

- **When `ir2` detects an object (LOW):**
  - `myservo1` and `myservo2` are set to 0 degrees.
  - LED on pins 11 and 10 are turned ON.
  - LED on pins 13 and 9 are turned OFF.
  - Buzzer on pin 12 is turned OFF.

## Code Overview

### Libraries Used
- **Servo.h**: To control the servo motors.

### Setup
- Pins for IR sensors, LEDs, and buzzer are initialized.
- Servo motors are attached to their respective pins.

### Loop
- Continuously checks the state of the IR sensors.
- Based on the sensor input, adjusts servo positions and activates LEDs/buzzer accordingly.

## How to Use

1. Connect the components as per the circuit description.
2. Upload the provided code to your Arduino board.
3. Power on the Arduino and test the IR sensors by placing objects in front of them.

## License

This project is open-source and available for personal and educational use.
