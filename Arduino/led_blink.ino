void setup() {
  // put your setup code here, to run once:
  int D2 = 2;
  int D4 = 4; 
  pinMode(D2, OUTPUT);
  pinMode(D4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int D2 = 2;
  int D4 = 4;
  digitalWrite(D2, HIGH);
  delay(500);
  digitalWrite(D4, LOW);
  delay(1000);
  digitalWrite(D2, LOW);
  delay(500);
  digitalWrite(D4, HIGH);
  delay(1000);

}
