/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot vary its speed based on how far one turns the potentiometer
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>

Servo left;
Servo right;
int pmeter = 5; 
void setup(){
  left.attach(9);
  right.attach(10);
  
}

void loop(){
int value = analogRead(pmeter);
left.writeMicroseconds(1500 - value/5.12);
right.writeMicroseconds(1500 + value/5.12);

}

