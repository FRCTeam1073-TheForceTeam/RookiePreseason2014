/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot vary its speed based on how far one turns the potentiometer
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>

Servo right;
Servo left;

int valuePotentiometer;
int servoVal;
int potPin = 5;

void superSpeed()
{
  int servoSpeed = analogRead(potPin);
  servoVal = servoSpeed / 7;
  right.writeMicroseconds(1500 - servoSpeed);
  left.writeMicroseconds(1500 + servoSpeed);
}

void setup()
{
  right.attach(9);
  left.attach(10);
  pinMode(A5, INPUT);
  //your code goes here
}

void loop()
{
  superSpeed();
  //also here
}

