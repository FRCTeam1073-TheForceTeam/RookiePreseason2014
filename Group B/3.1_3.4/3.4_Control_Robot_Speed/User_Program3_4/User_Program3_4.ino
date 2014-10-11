/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot vary its speed based on how far one turns the potentiometer
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>
int pt = 5;
Servo left;
Servo right;

void setup(){
        left.attach(10);
        right.attach(9);
}

void loop(){
  int pf = analogRead(pt);
  int poo = pf / 7;
        left.writeMicroseconds(1500 + poo);
        right.writeMicroseconds(1500 - poo);
}

