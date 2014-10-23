/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot drive forward until it sees a black line
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>;
Servo left;
Servo right;

int leftLight = 0;
int rightLight = 1;
int leftLightVal = 0;
int rightLightVal = 0;
int leftWhiteVal = 390;
int rightWhiteVal = 450;
int changeVal = 150;

void readSensors(){
  leftLightVal = analogRead (leftLight);
  rightLightVal = analogRead (rightLight);
}
void setup(){
  left.attach(9);
  right.attach(10);
}

void loop(){
  readSensors();
  if (leftLightVal >= leftWhiteVal + changeVal || rightLightVal >= rightWhiteVal + changeVal){
   right.writeMicroseconds (1500);
  left.writeMicroseconds (1500); 
  }
  else {
  right.writeMicroseconds (1700);
  left.writeMicroseconds (1300);
  }
}

