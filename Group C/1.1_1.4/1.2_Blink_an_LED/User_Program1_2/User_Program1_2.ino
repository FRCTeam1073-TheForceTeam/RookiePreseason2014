/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Blink an LED on pin 5 
Feel free to view the example program within the same folder if you need help!
*/
int led = 5;

void setup(){
  pinMode(led, OUTPUT);
}

boolean on = false;
int count = 0;

/*

void loop()
{
  if (count == 20000)
  {
    if (on == true)
    {
      digitalWrite(led, LOW);
      on = false;
    }
    else
    {
      digitalWrite(led, HIGH);
      on = true;
    }
    count = 0;
  }
  count = count + 1;
}
*/

void loop()
{
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led, HIGH);
  delay(500);
}

