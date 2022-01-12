// Chapter 5 - Motor Control
// Controlling Speed
// By Cornel Amariei for Packt Publishing
//https://www.instructables.com/Arduino-Servo-Motors/

// Include the Servo library
#include <Servo.h> 

// Declare the Servo pin
int servoPin = 13;
// Create a servo object
Servo Servo1;


void loop(){
  // Make servo go to 0 degrees
  Servo1.write(0);
  delay(250);
  // Make servo go to 90 degrees
  Servo1.write(90);
  delay(250);
  // Make servo go to 180 degrees
  Servo1.write(180);
  delay(250);
}
