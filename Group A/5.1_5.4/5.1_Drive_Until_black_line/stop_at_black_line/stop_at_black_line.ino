/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 10/17/14

Program: Using both of the light sensors, drive the robot forward until one of the sensors sees a black line

IMPORTANT NOTE:
This example program, in order to maintain compatibility with all the boebots, does not take any specific line sensor values. Instead, it looks for a change in values and calibrates itself. 
This is not necessary for the user program. 
For these first programs in unit 5, simply replace any boolean logic (&& and ||) statements with your recorded values.
*/

#include <Servo.h>

Servo left;  
Servo right;  //creates two servo objects

int leftLight = 0;
int rightLight = 1;

int leftVal = 0;
int rightVal = 0;

int whiteValLeft = 0; 
int whiteValRight = 0;

int changeVal = 150;

void getWhite(){
  whiteValLeft = analogRead(leftLight);
  whiteValRight = analogRead(rightLight);
}
void readSensors(){
  leftVal = analogRead(leftLight);
  rightVal = analogRead(rightLight);
}
void setup(){ //setup runs just once
  left.attach(10);
  right.attach(9); //mounts each servo on their respective digital pin
  getWhite();
}
void loop(){ //loop runs over and over again
readSensors();
  if((leftVal >= whiteValLeft + changeVal || rightVal >= whiteValRight + changeVal)){
    left.writeMicroseconds(1500);
    right.writeMicroseconds(1500);
  }
  else{
    left.writeMicroseconds(1700);
    right.writeMicroseconds(1300);
  }
  
}


