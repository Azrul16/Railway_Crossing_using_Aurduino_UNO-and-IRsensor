#include <Servo.h>

int ir1 = 2;
int ir2 = 7;

Servo myservo1;
Servo myservo2;

void setup() {
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(13, OUTPUT); // LED
  pinMode(12, OUTPUT); // BUZZER
  pinMode(11, OUTPUT); // LED
  pinMode(10, OUTPUT); // LED
  pinMode(9, OUTPUT);  // LED
  
  myservo1.attach(3);  // Attach servo 1 to pin 3
  myservo2.attach(8);  // Attach servo 2 to pin 5
}

void loop() {
  if (digitalRead(ir1) == LOW) {
    myservo2.write(90);  // Set servo 2 at 90 degrees
    myservo1.write(90);  // Set servo 1 at 90 degrees
    digitalWrite(13, HIGH); // Turn on LED
    digitalWrite(12, HIGH); // Turn on Buzzer
    digitalWrite(11, LOW);  // Turn off LED
    digitalWrite(10, LOW);  // Turn off LED
    digitalWrite(9, HIGH);  // Turn on LED
  } else if (digitalRead(ir2) == LOW) {
    myservo2.write(0);  // Set servo 2 at 0 degrees
    myservo1.write(0);  // Set servo 1 at 0 degrees
    digitalWrite(13, LOW);  // Turn off LED
    digitalWrite(12, LOW);  // Turn off Buzzer
    digitalWrite(11, HIGH); // Turn on LED
    digitalWrite(10, HIGH); // Turn on LED
    digitalWrite(9, LOW);  // Turn off LED
  }
}
