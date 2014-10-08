/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Cycle the 3 leds of the robot, so that one led turns on, then the next, then the next
Feel free to view the example program within the same folder if you need help!
*/
int yellow = 3;
int green = 6;
int red = 5;
int blinkDelay = 500;

void setup(){
  pinMode (yellow, OUTPUT);
  pinMode (green, OUTPUT);
  pinMode (red, OUTPUT);
 
}

void cycle(int led){
  digitalWrite (led, HIGH);
  delay (blinkDelay);
  digitalWrite (led, LOW);
  delay (blinkDelay);
}
void loop(){
  cycle(yellow);
  cycle(green);
  cycle(red);
}

