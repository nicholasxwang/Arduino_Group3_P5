#include <Servo.h>

Servo myservo;   // create 4 servo objects to control the servos
Servo myservo1;
Servo myservo2;
Servo myservo3;

int angle = 90; // initial angle  for servo
int angle1 = 90;
int angle2 = 90;
int angle3 = 90;
int angleStep = 5;

#define LEFT 10   // pin 10 is connected to left button
#define RIGHT  11  // pin 11 is connected to right button
#define LEFT1 2 // pin 2 is connected to right button
#define RIGHT1 3 // pin 3 is connected to right button
#define LEFT2 6 // pin 6 is connected to right button
#define RIGHT2 7 // pin 7 is connected to right button
#define RIGHT3 4 // pin 4 is connected to right button
#define LEFT3 5 // pin 5 is connected to right button

void setup() {
  Serial.begin(9600);  //  setup serial
  myservo.attach(8);  // attaches the servo on pin 9 to the servo object
  
  myservo1.attach(9);
  myservo2.attach(12);
  myservo3.attach(13);
  pinMode(LEFT, INPUT_PULLUP); // assign pins as input left button
  pinMode(RIGHT, INPUT_PULLUP); // assing pins as input for right button
  pinMode(LEFT1, INPUT_PULLUP);
  pinMode(RIGHT1, INPUT_PULLUP);
  pinMode(LEFT2, INPUT_PULLUP);
  pinMode(RIGHT2, INPUT_PULLUP);
  pinMode(LEFT3, INPUT_PULLUP);
  pinMode(RIGHT3, INPUT_PULLUP);

  myservo.write(angle); // send servo to the middle at 90 degrees
  myservo1.write(angle1); // send servo to the middle at 90 degrees
  myservo1.write(angle2); // send servo to the middle at 90 degrees
  myservo1.write(angle3); // send servo to the middle at 90 degrees

}

void loop() {
  ////////////////////////////////////////////////////////////////////////
  while (digitalRead(RIGHT) == LOW) {

    if (angle > 0 && angle <= 180) {
      angle = angle - angleStep;
      if (angle < 0) {
        angle = 0;
      }
      else {
        myservo.write(angle); // move the servo to desired angle
      }
    }

    delay(50); // waits for the servo to get there
  }
  ////////////////////////////////////////////////////////////////////////
  while (digitalRead(LEFT) == LOW) {
    if (angle >= 0 && angle <= 180) {
      angle = angle + angleStep;
      if (angle > 180) {
        angle = 180;
      }
      else {
        myservo.write(angle); // move the servo to desired angle
      }
    }

    delay(50); // waits for the servo to get there
  }
  ////////////////////////////////////////////////////////////////////////
  while (digitalRead(RIGHT1) == LOW) {

    if (angle1 > 0 && angle1 <= 180) {
      angle1 = angle1 - angleStep;
      if (angle1 < 0) {
        angle1 = 0;
      } else {
        myservo1.write(angle1); // move the servo to desired angle
      }
    }

    delay(50); // waits for the servo to get there
  }
  ////////////////////////////////////////////////////////////////////////
  while (digitalRead(LEFT1) == LOW) {

    if (angle1 >= 0 && angle1 <= 180) {
      angle1 = angle1 + angleStep;
      if (angle1 > 180) {
        angle = 180;
      } else {
        myservo1.write(angle1); // move the servo to desired angle
      }
    }

    delay(50); // waits for the servo to get there
  }
  ////////////////////////////////////////////////////////////////////////
  while (digitalRead(RIGHT2) == LOW) {

    if (angle2 > 0 && angle2 <= 180) {
      angle2 = angle2 - angleStep;
      if (angle2 < 0) {
        angle2 = 0;
      }
      else {
        myservo2.write(angle2); // move the servo to desired angle
      }
    }

    delay(50); // waits for the servo to get there
  }
  ////////////////////////////////////////////////////////////////////////
  while (digitalRead(LEFT2) == LOW) {

    if (angle2 >= 0 && angle2 <= 180) {
      angle2 = angle2 + angleStep;
      if (angle2 > 180) {
        angle = 180;
      }
      else {
        myservo2.write(angle2); // move the servo to desired angle
      }
    }

    delay(50); // waits for the servo to get there
  }
  ////////////////////////////////////////////////////////////////////////
  while (digitalRead(RIGHT3) == LOW) {

    if (angle3 > 0 && angle3 <= 180) {
      angle3 = angle3 - angleStep;
      if (angle3 < 0) {
        angle3 = 0;
      }
      else {
        myservo3.write(angle3); // move the servo to desired angle
      }
    }

    delay(50); // waits for the servo to get there
  }
  ////////////////////////////////////////////////////////////////////////
  while (digitalRead(LEFT3) == LOW) {
 
    if (angle3 >= 0 && angle3 <= 180) {
      angle3 = angle3 + angleStep;
      if (angle3 > 180) {
        angle = 180;
      }
      else {
        myservo3.write(angle3); // move the servo to desired angle
      }
    }

    delay(50); // waits for the servo to get there
  }
}
//http://www.makosite.one/robotic-arm.php
//Copied Code
