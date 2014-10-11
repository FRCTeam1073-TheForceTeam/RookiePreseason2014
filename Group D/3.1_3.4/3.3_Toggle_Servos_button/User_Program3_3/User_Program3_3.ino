/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: have the robot drive when the button is pressed
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>
int button = 7;
Servo right;
Servo left;

void setup()
{
  pinMode(button, INPUT);
  left.attach(10);
  right.attach(9);
  //your code goes here
}

void loop()
{
  if(digitalRead(button))
  {
    left.writeMicroseconds(1700);
    right.writeMicroseconds(1300);
  }
  else
  {
    left.writeMicroseconds(1500);
    right.writeMicroseconds(1500);
  }
  //also here
}

