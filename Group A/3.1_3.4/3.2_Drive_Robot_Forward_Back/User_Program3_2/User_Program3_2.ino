/*Software 1073 Arduino BoeBots
 User Program 
 Method stubs are pre-made. add your own code to complete the challenge!
 
 Program Task: drive the robot forward, and then backward, for two different time intervals
 Feel free to view the example program within the same folder if you need help!
 */
#include <Servo.h>;

Servo left;
Servo right;
int delayV = 2500;
int delayVa = 1500;

void setup(){
  left.attach(10);
  right.attach(9);
  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);
  delay(delayV);
  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);
  delay(delayVa);
  left.writeMicroseconds(1300);
  right.writeMicroseconds(1700);
  delay(delayVa);
  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);
}

void loop(){
  //also here
}


