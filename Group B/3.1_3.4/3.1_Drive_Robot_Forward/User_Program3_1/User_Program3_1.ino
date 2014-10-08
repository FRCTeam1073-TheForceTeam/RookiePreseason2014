/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: drive the robot forward for a few seconds
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>
int t = 4000;
int forward = 1700;
int stahp = 1500;
Servo left;
Servo right;

void setup(){
  left.attach(10);
  right.attach(9);
  left.writeMicroseconds(forward);
  right.writeMicroseconds(1300);
  delay(t);
  left.writeMicroseconds(stahp);
  right.writeMicroseconds(stahp);
}

void loop(){
  
}

