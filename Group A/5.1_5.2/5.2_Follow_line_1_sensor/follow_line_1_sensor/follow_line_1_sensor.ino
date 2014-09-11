/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 9/11/14

Program: Using one of the light sensors, follow a black line
*/
#include <Servo.h>

Servo left;
Servo right;

int sensorPin = 0;
int sensorVal = 0;
int whiteVal = 0;

void getWhite(){
  whiteVal = analogRead(sensorPin);
}

void setup(){
  left.attach(10);
  right.attach(9);
  Serial.begin(9600);
  getWhite();
}
void loop(){
  sensorVal = analogRead(sensorPin);
  
}


