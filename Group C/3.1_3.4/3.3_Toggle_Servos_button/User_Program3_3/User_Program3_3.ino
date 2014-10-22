/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: have the robot drive when the button is pressed
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>

Servo left;
Servo right;

int button = 7;  


void setup(){
  pinMode(button, INPUT);
  left.attach(9);
  right.attach(10);
}


void loop(){
  if(digitalRead(button)) 
  {
     left.writeMicroseconds(1300);
     right.writeMicroseconds(1700);
     
  } 
  else
  {
     left.writeMicroseconds(1500);
     right.writeMicroseconds(1500);
  }
}
