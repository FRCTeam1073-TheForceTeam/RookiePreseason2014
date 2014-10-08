/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: drive the robot forward, and then backward, for two different time intervals
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>

int time = 1000;
int stahp = 1500;
int forward = 1700;
int forwar = 1300;
int reverse = 1300;
int revers = 1700;
int button = 7;

Servo left;
Servo right;

void setup(){}

void loop(){
  left.attach(10);
  right.attach(9);
  left.writeMicroseconds(forward);
  right.writeMicroseconds(forwar);
  delay(1000);
  left.writeMicroseconds(reverse);
  right.writeMicroseconds(revers);
  delay(1000);
  
}

