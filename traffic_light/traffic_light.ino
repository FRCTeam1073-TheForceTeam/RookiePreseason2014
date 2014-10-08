int yled=3;
int rled=5;
int gled=6;

int t = 8000;
void setup(){
  pinMode(yled, OUTPUT);
  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
}
void loop(){
  digitalWrite(gled, HIGH);
  delay(t);
  digitalWrite(gled, LOW);
  digitalWrite(yled, HIGH);
  delay(t/4);
  digitalWrite(yled, LOW);
  digitalWrite(rled, HIGH);
  delay(t);
  digitalWrite(rled, LOW);
}
