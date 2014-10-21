/* ***Derek's line follower***

This program is designed to have a custom-configured boebot navigate a line
7/12/14 - Program works, uploading to github. will clean up/optimize later

Pin connections:
A0 = Left Sensor
A1 = Right Sensor
D6 = Right motor
D3 = Left motor
*/
#include <Servo.h>
//Servos
Servo left;
Servo right;
//Servo values
int forward = 1550;
int zero = 1500;
int backward = 1450;
//direct sensor values
int sensorValue0 = 0; 
int sensorValue1 = 0; 
//check value
int checkValue0 = 0;
int checkValue1 = 0;
//check constant
float checkConstant = 1.5;
//white value
int lowValue0 = 0;
int lowValue1 = 0;
//dark value
int highValue0 = 0;
int highValue1 = 0;
//line booleans
boolean isLeftHigh = false;
boolean isRightHigh = false;
boolean isLine = false;
//time variables
int startTime = 0;
int currentTime = 0;
int changeTime = 0;
int storedTime = 0;
//delay variable
int printDelay = 2000;
//Methods
//Stop motors
void stopMotors(){
  left.writeMicroseconds(zero);
  right.writeMicroseconds(zero);
}
  
//read the line sensors
void readSensors(){
  sensorValue0 = analogRead(A0);
  sensorValue1 = analogRead(A1);
}
//Calibrate: read and determine the white and dark values
void calibrate(){
  sensorValue0 = analogRead(A0);
  sensorValue1 = analogRead(A1);
  lowValue0 = sensorValue0;
  lowValue1 = sensorValue1;
  checkValue0 = lowValue0 * checkConstant;
  checkValue1 = lowValue1 * checkConstant;
  //startTime = millis();
  while(sensorValue0 < checkValue0){
    left.writeMicroseconds(forward);
    right.writeMicroseconds(zero);
    sensorValue0 = analogRead(A0);
    //printStuff();
  }
  highValue0 = sensorValue0;
  /* Work in progress: return to start position
currentTime = millis();
changeTime = currentTime - changeTime;
storedTime = changeTime;
*/
  stopMotors();
  while(sensorValue1 < checkValue1){
    left.writeMicroseconds(zero);
    right.writeMicroseconds(backward);
    sensorValue1 = analogRead(A1);
  }
  highValue1 = sensorValue1;
  stopMotors();
}
//check left line sensor for line
boolean leftLine(){
  if(sensorValue0 >= highValue0){
    isLeftHigh = true;
  }
  else{
    isLeftHigh = false;
  }
  return isLeftHigh;
}
//check right line sensor for line
boolean rightLine(){
  if(sensorValue1 >= highValue1){
    isRightHigh = true;
  }
  else{
    isRightHigh = false;
  }
  return isRightHigh;
}
//print all the values
void printStuff(){
  Serial.print("Sensor 1: ");
  Serial.println(sensorValue0);
  Serial.print("Sensor 2: ");
  Serial.println(sensorValue1);
  Serial.print("Lowest Value Sensor 1: ");
  Serial.println(lowValue0);
  Serial.print("Lowest Value on Sensor 2: ");
  Serial.println(lowValue1);
  Serial.print("Highest Value on Sensor 1: ");
  Serial.println(highValue0);
  Serial.print("Highest Value on Sensor 2: ");
  Serial.println(highValue1);
  Serial.print("Check Value Sensor 1: ");
  Serial.println(checkValue0);
  Serial.print("Check Value Sensor 2: ");
  Serial.println(checkValue1);
  
  Serial.print("Start Time: ");
  Serial.println(startTime);
  Serial.println(" ");
  delay(printDelay);
}
//Follow: Follows a line with the calibrate() values
void follow(){
  readSensors();
  /*  horizontal line detection, work in progress
  if(leftLine() && rightLine()){
    right.writeMicroseconds(backward);
    left.writeMicroseconds(forward);
  }
  */
  if(leftLine()){
    right.writeMicroseconds(backward);
    left.writeMicroseconds(zero);
    isLine = true;
  }
  else{
    right.writeMicroseconds(backward);
    left.writeMicroseconds(forward);
    isLine = false;
  }
  if(isLine == false){
    
    if(rightLine()){
      right.writeMicroseconds(zero);
      left.writeMicroseconds(forward);
    }
    else{
      right.writeMicroseconds(backward);
      left.writeMicroseconds(forward);
    }
  }
}
void setup() {
  Serial.begin(9600);
  left.attach(10);
  right.attach(9);
  //delay(3000);
  calibrate();
  //printStuff();
}

void loop() {
  /*readSensors();
  Serial.print("left sensor: ");
  Serial.println(sensorValue0);
  Serial.print("right sensor: "); 
  Serial.println(sensorValue1);
  Serial.println();*/
  //delay(1000);
  follow();
  readSensors();
  //printStuff();
  //stopMotors();
}
