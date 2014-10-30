/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot cycle the leds while driving, but if it sees a wall, stop and beep the buzzer
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>
#include<NewPing.h>


int Trigger_Pin = 12;
int Echo_Pin = 8; 
int max_distance = 200; 
NewPing sonar(Trigger_Pin, Echo_Pin, max_distance);
int Buzzer = 11;
int redled = 5;
int yellowled = 3;
int greenled = 6;
int counter = 0;




Servo left;
Servo right; 

int getDistance() {
  delay(50);
  int ping = sonar.ping();
  int centd = ping/US_ROUNDTRIP_CM;
  return centd;
}



void setup(){
left.attach(10);
right.attach(9);
pinMode(Buzzer, OUTPUT);
pinMode(redled, OUTPUT);
pinMode(greenled, OUTPUT);
pinMode(yellowled, OUTPUT);
}

void loop(){
counter += 1;
if(counter < 1000) {
digitalWrite(redled, LOW);
digitalWrite(yellowled, HIGH);
}
else if(counter < 2000) {
digitalWrite(yellowled, LOW);
digitalWrite(greenled, HIGH);
}
else if(counter < 3000) {
digitalWrite(greenled, LOW);
digitalWrite(redled, HIGH);
}
else  {
counter = 0;
}

if(getDistance() > 10)
  drive();
else  { 
  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);
}
}

void drive(){
left.writeMicroseconds(1700);
right.writeMicroseconds(1300);
}
