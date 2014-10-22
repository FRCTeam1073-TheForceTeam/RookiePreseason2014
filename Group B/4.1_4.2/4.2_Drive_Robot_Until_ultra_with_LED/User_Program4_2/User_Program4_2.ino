/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot cycle the leds while driving, but if it sees a wall, stop and beep the buzzer
Feel free to view the example program within the same folder if you need help!
*/

#include <NewPing.h>
#include <Servo.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 8
#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
Servo left;
Servo right;
int forward = 1700;
int forwar = 1300;
int poo = 1500;
int led = 5;
int led2 = 3;
int led3 = 6;
int buzzbutt = 11;

void cycle(){
  left.writeMicroseconds(forward);
  right.writeMicroseconds(forwar);
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);
  delay(100);
  
}

void setup(){
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
left.attach(10);
right.attach(9);
}

void loop(){
  delay(50); 
  unsigned int uS = sonar.ping(); 
  unsigned int cmDist = uS / US_ROUNDTRIP_CM;
  Serial.println(cmDist);
  if (cmDist <= 50)
  {
    right.writeMicroseconds(poo);
    left.writeMicroseconds(poo);
    digitalWrite(led3, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led, LOW);
    analogWrite(buzzbutt, 2);
    delay(150);
    analogWrite(buzzbutt, 0);
    delay(40);
  }
    else
    {
        cycle();
    }
  
    
  
}

