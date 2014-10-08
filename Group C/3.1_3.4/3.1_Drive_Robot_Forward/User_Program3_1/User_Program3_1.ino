/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: drive the robot forward for a few seconds
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>

Servo


int rdrive = 9;
int ldrive = 10;

void setup(){
  pinMode(rdrive, OUTPUT);
  pinMode(ldrive, OUTPUT);
}

void loop(){
  analogWrite(rdrive, 255); 
  analogWrite(ldrive, 255);
  delay(2000);
  analogWrite(rdrive, 0);
  analogWrite(ldrive, 0);
}

