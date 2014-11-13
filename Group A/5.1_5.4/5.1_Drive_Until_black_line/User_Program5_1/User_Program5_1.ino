/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot drive forward until it sees a black line
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>
int leftLight = 0;
int rightLight = 1;
int leftWhite = 1010;
int leftBlack = 66;
int rightWhite = 956;
int rightBlack = 74;
Servo left;  
Servo right; 
void setup(){
  left.attach(10);
  right.attach(9);
}
void loop(){
  int leftVal = analogRead(leftLight);
  int rightVal = analogRead(rightLight);
  if(leftVal <= leftBlack + 400 || rightVal <= rightBlack + 400){
   left.writeMicroseconds(1500);
   right.writeMicroseconds(1500);
  } 
  else {
    left.writeMicroseconds(1650);
   right.writeMicroseconds(1350);
  }
  
}

