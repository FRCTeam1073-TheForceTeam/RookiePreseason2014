/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot cycle the leds while driving, but if it sees a wall, stop and beep the buzzer
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>
#include <NewPing.h>

int rLed = 5;
int yLed = 3;
int gLed = 6;
int buzzer = 11;

Servo right;
Servo left;

NewPing sonar (12, 8, 200);

int getDistance()
{
  delay(50);
  unsigned int uS = sonar.ping();
  unsigned int cmDist = uS / US_ROUNDTRIP_CM;
  return cmDist;
}

void cycleLights()
{
 digitalWrite(rLed, HIGH);
 delay(500);
 digitalWrite(rLed, LOW);
 delay(500);
 digitalWrite(yLed, HIGH);
 delay(500);
 digitalWrite(yLed, LOW);
 delay(500);
 digitalWrite(gLed, HIGH);
 delay(500);
 digitalWrite(gLed, LOW);
 delay(500);
}

void drive()
{
  if(getDistance() > 10)
  {
    right.writeMicroseconds(1700);
    left.writeMicroseconds(1300);
    dimmer();
  }
  else
  {
   right.writeMicroseconds(1500);
   left.writeMicroseconds(1500);
   digitalWrite(buzzer, HIGH);
   delay(500);
   digitalWrite(buzzer, LOW);
  }
}

void dimmer(){
  for(int i = 0; i <= 255; i+=5){
    analogWrite(rLed, i);
    delay(1);
  }
  for(int i = 255; i >=0; i-=5){
    analogWrite(rLed, i);
    delay(1);  
  }
  for(int j = 0; j <= 255; j+=5){
    analogWrite(yLed, j);
    delay(1);
  }
  for(int j = 255; j >=0; j-=5){
    analogWrite(yLed, j);
    delay(1);
  }
  for(int k = 0; k <= 255; k+=5){
    analogWrite(gLed, k);
    delay(1);
  }
  for(int k = 255; k >=0; k-=5){
    analogWrite(gLed, k);
    delay(1);
  }
}
  
void setup()
{
  pinMode(rLed, OUTPUT);
  pinMode(yLed, OUTPUT);
  pinMode(gLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  right.attach(10);
  left.attach(9);
  //your code goes here
}

void loop()
{
  drive();
  //also here
}

