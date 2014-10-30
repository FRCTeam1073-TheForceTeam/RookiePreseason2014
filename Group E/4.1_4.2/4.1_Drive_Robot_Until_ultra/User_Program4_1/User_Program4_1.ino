/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot drive forward until the ultrasonic sees a wall
Feel free to view the example program within the same folder if you need help!
*/

#include <Servo.h>
#include <NewPing.h>
Servo right;
Servo left;
int delTime = 50;
int threshHold = 15;
//Ultrasonic Definitions using the Newping library
#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     8  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
//NewPing method sonar

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

int getDistance(){
  delay(delTime);
 unsigned int sonic = sonar.ping(); 
 unsigned int cmDist = sonic / US_ROUNTRIP_CM;
 return cmDist;
}
void Drive(){
 if (threshHold <= getDistance()){
  right.writeMicroseconds(1700);
  left.writeMicroseconds(1300);
 } 
 else {
   right.writeMicroseconds(1500);
  left.writeMicroseconds(1500); 
   
 }
}

void setup(){
  right.attach(10);
  left.attach(9);
}

void loop(){
  Drive ();
}

