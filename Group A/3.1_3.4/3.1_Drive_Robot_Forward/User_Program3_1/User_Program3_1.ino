/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: drive the robot forward for a few seconds
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>

Servo left;
Servo right;

int delayVal = 5000;

void setup(){
  left.attach(10);
  right.attach(9);
  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);
  delay(delayVal);
  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);
}

void loop(){
  
}

