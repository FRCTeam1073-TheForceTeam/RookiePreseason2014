/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: have the robot drive when the button is pressed
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>;
Servo right;
Servo left;
int button = 7;
void setup(){
  left.attach(10);
  right.attach(9);
}

void loop(){
  int buttonVal = digitalRead(button);
  if (buttonVal == 1) {
    left.writeMicroseconds(1700);
    right.writeMicroseconds(1300);
  }
  else {
    left.writeMicroseconds(1500);
    right.writeMicroseconds(1500);
  }
}

