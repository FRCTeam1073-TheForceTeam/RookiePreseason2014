/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 8/14/14

Program: Drive the robot forward for a duration
*/

#include <Servo.h>

Servo left;  
Servo right;  //creates two servo objects

int delayValue = 5000; //creates an int that controls how long to drive forward

void setup(){ //setup runs just once
  left.attach(3);
  right.attach(6); //mounts each servo on their respective digital pin
  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);
  delay(delayValue);
  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);
}
void loop(){ //loop runs over and over again
  ; //nothing needed here
}


