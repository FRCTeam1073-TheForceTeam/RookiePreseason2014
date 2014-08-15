/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 8/14/14

Program: Turns on an LED on pin 9
*/

int led = 9;  //creates an int called "led" with a value of 9

void setup(){ //setup runs just once
  pinMode(led, OUTPUT); //establishes the led as an output
  digitalWrite(led, HIGH); //sends voltage to the led pin
}
void loop(){
  ; //nothing needed here
}

