/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot drive forward until it sees a black line
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>

Servo left;
Servo right;
int forward = 1700;
int forwar = 1300;
int poop = 1500;
int sensright = 1;
int sensleft = 0;
int leftnum = 0;
int rightnum = 0;

void readsensor(){
  rightnum = analogRead(sensright);
  leftnum = analogRead(sensleft);
  Serial.println(" Left ");
  Serial.print(leftnum);
  delay(500);
  Serial.println("");
  Serial.println(" Right ");
  Serial.print(rightnum);
  Serial.println("");
  delay(500);
}

void godrivego(){
  left.writeMicroseconds(forward);
  right.writeMicroseconds(forwar);
  
}
void setup(){
  Serial.begin(9600);
  left.attach(10);
  right.attach(9);
}

void loop(){
  readsensor();
  godrivego();
  if(leftnum + rightnum >= 1900){
      left.writeMicroseconds(poop);
      right.writeMicroseconds(poop);
  }
  
}

