/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Using both the line sensors, follow a line AND:
1) auto-calibrate (so that the user does not have to change the code)
2) be able to continue moving when both line sensors see a black line

Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>;

Servo left;
Servo right;

int senseR = 1;
int senseL = 0;

int rWhiteVal = 0;
int lWhiteVal = 0;

int fwd = 1560; // fwd is rev on the right motor
int stp = 1500;
int rev = 1440;

int lSenseVal = 0;
int rSenseVal = 0;

int changeVal = 150;

//int prevRWhiteVal = 0;
//int prevLWhiteVal = 0;

void autoCal(){
  for (int i; i <= 20; i++){
    rWhiteVal = (analogRead(senseR) + prevRWhiteVal) / i;
    lWhiteVal = (analogRead(senseL) + prevLWhiteVal) / i;
    //prevRWhiteVal = rWhiteVal;
    //prevLWhiteVal = lWhiteVal;
  }
}

void setup(){
  left.attach(10);
  right.attach(9);
  autoCal();
  
}

void readSensors(){
  lSenseVal = analogRead(senseL);
  rSenseVal = analogRead(senseR);
}

boolean isLeftLine(){
  boolean leftLine = false;
  
  if(lSenseVal >= lWhiteVal + changeVal){
    leftLine = true;
  }
  else leftLine;
 
 return leftLine;
}

boolean isRightLine(){
  boolean rightLine = false;
  
  if(rSenseVal >= rWhiteVal + changeVal){
    rightLine = true;
  }
  else rightLine;
 
 return rightLine;
}

void Drive (){
  if(!isRightLine() && !isLeftLine()){
    right.writeMicroseconds(rev);
    left.writeMicroseconds(fwd);
  }
  else if(isRightLine()){
    right.writeMicroseconds(stp);
    left.writeMicroseconds(fwd);
   
  }
    else if(isLeftLine()){
    right.writeMicroseconds(rev);
    left.writeMicroseconds(stp);
   
  }
}


void loop(){
  readSensors();
  Drive();
  
}

