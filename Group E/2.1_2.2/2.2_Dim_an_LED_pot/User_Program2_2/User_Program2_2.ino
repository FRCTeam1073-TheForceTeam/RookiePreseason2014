/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Dim the led on pin 5 using the potentiometer, so that as the potentiometer is turned, the brightness is adjusted
Feel free to view the example program within the same folder if you need help!
*/
int red = 5;
int dimr = 5;

void setup(){
  pinMode(red, OUTPUT);
}

void loop(){
int dimrVal = analogRead(dimr);
int ledVal = dimrVal/4;
analogWrite(red, ledVal);
}

