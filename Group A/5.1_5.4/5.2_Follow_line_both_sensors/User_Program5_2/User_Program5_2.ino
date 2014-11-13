/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Using both the line sensors, follow a line
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
  Serial.begin(9600);
  left.attach(10);
  right.attach(9);
}
void loop(){
  int leftVal = analogRead(leftLight);
  int rightVal = analogRead(rightLight);
  if(leftVal <= leftBlack + 400 || rightVal <= rightBlack + 400){
   left.writeMicroseconds(1700);
   right.writeMicroseconds(1300);
  } 
  else if (leftVal <= leftWhite - 600){
    left.writeMicroseconds(1700);
    right.writeMicroseconds(1450);
  }
  else if (rightVal <= rightWhite - 600) {
   left.writeMicroseconds(1550);
   right.writeMicroseconds(1300); 
  }
  /*Serial.println(analogRead(rightLight));
  delay (500);*/
}

