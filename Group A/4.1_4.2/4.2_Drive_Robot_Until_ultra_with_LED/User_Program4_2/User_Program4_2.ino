/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot have style while driving, but if it sees a wall, stop and beep the buzzer
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>
#include <NewPing.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 8
#define MAX_DISTANCE 200
int r = 5;
int y = 3;
int g = 6;
int time = 150;
int buzz = 11;
int freshHold = 20;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
Servo left;
Servo right;

void setup(){
  left.attach(10);
  right.attach(9);
}
void cycle(int pin){
   for(int i = 0; i < 255; i = i + 5){
   analogWrite(pin, i); 
   delay(5);  
   }
   for(int i = 255; i > 0; i = i - 5){
     analogWrite(pin, i); 
     delay(5);
   }
}
void cycle1(){
  cycle(r);
  cycle(y);
  cycle(g);
}
void drive(){
  if(getDist() > freshHold){
   left.writeMicroseconds(1700);
   right.writeMicroseconds(1300);
   cycle1();
  }
  else {
    left.writeMicroseconds(1500);
    right.writeMicroseconds(1500);
    analogWrite(buzz, 2);
    delay(time);
    analogWrite(buzz, 0);
    delay(25);
  }
}
void loop(){
  drive();
}

int getDist(){
  delay(50);
  unsigned int uS = sonar.ping();
  unsigned int cmDist = uS / US_ROUNDTRIP_CM;
  return cmDist;
}

