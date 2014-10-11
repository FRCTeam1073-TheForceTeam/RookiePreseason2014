/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: drive the robot forward for a few seconds
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>

Servo right;
Servo left;



void setup()
{
   right.attach(9);
   left.attach(10);
  //your code goes here
}

void loop()
{
  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300);
  //also here
}

