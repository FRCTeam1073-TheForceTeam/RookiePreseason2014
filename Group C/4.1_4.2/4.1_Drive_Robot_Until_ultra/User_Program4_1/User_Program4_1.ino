/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot drive forward until the ultrasonic sees a wall
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>
#include<NewPing.h>


int Trigger_Pin = 12;
int Echo_Pin = 8; 
int max_distance = 200; 
NewPing sonar(Trigger_Pin, Echo_Pin, max_distance);

Servo left;
Servo right; 

int getDistance() {
  delay(50);
  int ping = sonar.ping();
  int centd = ping/US_ROUNDTRIP_CM;
  return centd;
}



void setup(){
left.attach(10);
right.attach(9);

}

void loop(){
if(getDistance() > 10)
  drive();
else  { 
  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);
}
}

void drive(){
left.writeMicroseconds(1700);
right.writeMicroseconds(1300);
}
