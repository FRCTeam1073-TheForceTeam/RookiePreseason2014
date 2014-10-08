/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the LED on pin 5 turn on when the button is pressed
Feel free to view the example program within the same folder if you need help!
*/
int r = 5;
int button = 7;

void setup(){
  pinMode(r, OUTPUT);

}

void loop(){
  int f = digitalRead(button);
  if(f==1){
    digitalWrite(r, HIGH);
  }
  else{
    digitalWrite(r, LOW);
  }
}


