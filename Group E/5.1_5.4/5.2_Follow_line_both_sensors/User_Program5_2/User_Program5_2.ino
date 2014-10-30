/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Using both the line sensors, follow a line
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>;

Servo left;
Servo right;

int senseR = 1;
int senseL = 0;

int rWhiteVal = 455;
int lWhiteVal = 420;

int fwd = 1560; // fwd is rev on the right motor
int stp = 1500;
int rev = 1440;

int lSenseVal = 0;
int rSenseVal = 0;

int changeVal = 150;

void setup(){
  left.attach(10);
  right.attach(9);
  
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

