/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Create an autonomous program that has the robot searching for a clear path of travel.
Logic example (copied from powerpoint, 10/28/14):
Robot drives forward until it sees a wall
Checks to the left -> sees another wall
Checks to the right -> sees a clear pathway. 
Continues to the right and then repeats the process.

Feel free to not view the example program within the same folder, because it doesn't exist!
*/
#include <Servo.h>
#include <NewPing.h>
Servo left;
Servo right;
int ledr = 5;
int ledg = 6;
int ledy = 3;
int buzzer = 11;
int delTime = 50;
int threshHold = 15;
boolean ifDrive = true;

#define TRIGGER_PIN  12 
#define ECHO_PIN     8  
#define MAX_DISTANCE 100
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

int getDistance(){
 delay(delTime);
 unsigned int sonic = sonar.ping(); 
 unsigned int cmDist = sonic / US_ROUNDTRIP_CM;
 return cmDist;
}

void Drive (){
  right.writeMicroseconds(1700);
  left.writeMicroseconds(1300);
  digitalWrite(ledg, HIGH);
  digitalWrite(ledr, LOW);  
 /*if (threshHold >= getDistance()){
   right.writeMicroseconds(1500);
   left.writeMicroseconds(1500); 
   digitalWrite(ledr, HIGH);
   digitalWrite(ledg, LOW);
   delay(1000);*/
   /* digitalWrite(ledg, LOW); 
    digitalWrite(ledr, HIGH);
    delay(1000);
    right.writeMicroseconds(1700);
    left.writeMicroseconds(1500);
    delay(1000);
    right.writeMicroseconds(1500);
    left.writeMicroseconds(1500);
    delay(1000);
    */
    
}

void Turn (){  
     right.writeMicroseconds(1700);
     left.writeMicroseconds(1700);
     delay (670);
     right.writeMicroseconds(1500);
     left.writeMicroseconds(1500);
     getDistance();
}
void setup(){
  pinMode(ledg, OUTPUT);
  pinMode(ledr, OUTPUT);
  pinMode(ledy, OUTPUT);
  right.attach(10);
  left.attach(9);
}

void loop(){
if (getDistance() >= threshHold){
 Drive(); 
}
else if(getDistance() <= threshHold){
 Turn(); 
}
}
