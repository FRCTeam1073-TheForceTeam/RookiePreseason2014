/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: drive the robot forward, and then backward, for two different time intervals
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>

Servo left;
Servo right;

void setup(){
  left.attach(9);
  right.attach(10);
  left.writeMicroseconds(1300);
  right.writeMicroseconds(1700);
  delay(1000);
  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);
  delay(1000);
  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);
}

void loop(){
  //also here
}

