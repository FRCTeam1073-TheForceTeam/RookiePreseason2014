/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: have the robot drive when the button is pressed
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>

int button = 7;
int t = 4000;
int forward = 1700;
int stahp = 1500;
Servo right;
Servo left;

void setup(){
  
}

void loop(){
  int bv = digitalRead(button);
    if(bv == 1){
        left.attach(10);
        right.attach(9);
        left.writeMicroseconds(forward);
        right.writeMicroseconds(1300);
    }
    else{
         left.writeMicroseconds(stahp);
         right.writeMicroseconds(stahp);
    }

      
}

