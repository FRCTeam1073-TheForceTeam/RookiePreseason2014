/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Dim the led on pin 5 using the potentiometer, so that as the potentiometer is turned, the brightness is adjusted
Feel free to view the example program within the same folder if you need help!
*/
int r = 5;
int p = 5;

void setup(){
  //your code goes here
  pinMode(r, OUTPUT);
}

void loop(){
  int pVal = analogRead(p);
  int ledVal = pVal / 4;
  analogWrite(r, ledVal);
}

