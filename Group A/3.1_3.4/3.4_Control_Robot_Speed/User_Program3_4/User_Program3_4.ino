/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot vary its speed based on how far one turns the potentiometer
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>
int pot = 5;
Servo right;
Servo left;
void setup(){
  left.attach(10);
  right.attach(9);
}
void speedControl(){
  int potVal = analogRead(pot);
  int servoVal = potVal / 6;
  left.writeMicroseconds(servoVal + 1500);
  right.writeMicroseconds(1500 - servoVal);
}
void loop(){
  speedControl();
}

