/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Blink an LED on pin 5 
Feel free to view the example program within the same folder if you need help!
*/
int led = 5;
int blinkDelay = 500;

void setup(){
 pinMode (led, OUTPUT);
 
}
void loop(){
  digitalWrite (led, HIGH);
  delay (blinkDelay);
  digitalWrite (led, LOW);
  delay (blinkDelay);

}

