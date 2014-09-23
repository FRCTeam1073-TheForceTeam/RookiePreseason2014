/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 9/11/14

Program: Using one of the light sensors, drive the robot forward until the sensor sees a black line
*/

#include <Servo.h>

Servo left;  
Servo right;  //creates two servo objects

int sensorPin = 0; //mount the light sensor on pin 3
int val = 0;
int sensorVal = 0;
int whiteVal = 0; 
int changeVal = 100;
boolean isFinished = false;

void getWhite(){
  whiteVal = analogRead(sensorPin);
}
void setup(){ //setup runs just once
  Serial.begin(9600);
  left.attach(10);
  right.attach(9); //mounts each servo on their respective digital pin
  getWhite();
}
void loop(){ //loop runs over and over again
  sensorVal = analogRead(sensorPin);
  if(sensorVal <= whiteVal + changeVal && isFinished == false){
    left.writeMicroseconds(1700);
    right.writeMicroseconds(1300);
  }
  else{
    left.writeMicroseconds(1500);
    right.writeMicroseconds(1500);
    isFinished = true;
  }
  
}


