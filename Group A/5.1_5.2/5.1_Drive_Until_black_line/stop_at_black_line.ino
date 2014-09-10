/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 8/16/14

Program: Using one of the light sensors, drive the robot forward until the sensor sees a black line
*/

//#include <Servo.h>
/*
Servo left;  
Servo right;  //creates two servo objects
*/
int sensorPin = 0; //mount the light sensor on pin 3
int val = 0;
/*

void speedControl(){   //creates a method called speedcontrol
  potVal = analogRead(potPin); //read the analog pin
  servoVal = potVal / 7;  //manipulate the analog read for servo use
  left.writeMicroseconds(1500 + servoVal);  
  right.writeMicroseconds(1500 - servoVal);  //write value to the servos
}
*/
void setup(){ //setup runs just once
  Serial.begin(9600);
  /*left.attach(10);
  right.attach(2); //mounts each servo on their respective digital pin
*/
  
}
void loop(){ //loop runs over and over again
  //speedControl();
  val = analogRead(sensorPin);
  Serial.println(val);
  delay(200);
}


