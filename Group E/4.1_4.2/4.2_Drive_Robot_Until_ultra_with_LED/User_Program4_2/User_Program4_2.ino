/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot cycle the leds while driving, but if it sees a wall, stop and beep the buzzer
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>;
#include <NewPing.h>;

#define TRIGGER_PIN  12 
#define ECHO_PIN     8  
#define MAX_DISTANCE 200

Servo right;
Servo left;
int red = 5;
int green = 6;
int yellow = 3;
int delTime = 50;
int threshHold = 15;
int buzzer = 11;
int delayTime = 1;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);


void setup(){
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(buzzer, OUTPUT);
  right.attach(10);
  left.attach(9);
  
}

int getDistance (){
  delay(delTime);
  unsigned int uS = sonar.ping();
  unsigned int cmDist = uS / US_ROUNDTRIP_CM;
  return cmDist;
}

void cycle(int led){
  for(int i = 0; i < 255; i += 5){
    analogWrite(led, i);
    delay(1);
  }
  for(int j = 0; j < 255; j += 5){
    analogWrite(led, j);
    delay(1);
  }
  for(int k = 0; k < 255; k += 5){
    analogWrite(led, k);
    delay(1);
  }
}

void Drive (){
  if (threshHold <= getDistance()){
    right.writeMicroseconds(1700);
    left.writeMicroseconds(1300);
    analogWrite(buzzer, 0);
    cycle(red);
    cycle(green);
    cycle(yellow);
  }
  else {
   right.writeMicroseconds(1500);
   left.writeMicroseconds(1500); 
   analogWrite(buzzer, 5);
  }
  
}

void loop(){
 Drive();
}

