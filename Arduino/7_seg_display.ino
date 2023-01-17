int D0 = 1;
int D1 = 2;
int D2 = 4;
int D3 = 7;
int D4 = 8;
int D5 = 12;
int D6 = 13;

void setup() {
  // put your setup code here, to run once:
  
  

  pinMode(D0, OUTPUT); // a
  pinMode(D1, OUTPUT); // b
  pinMode(D2, OUTPUT); // c
  pinMode(D3, OUTPUT); // d
  pinMode(D4, OUTPUT); // e
  pinMode(D5, OUTPUT); // f
  pinMode(D6, OUTPUT); // g
  
}

// Because the LEDs are in reverse-bias, the output pin needs to be set to LOW for the LED to turn on and HIGH for the LED to turn off
void loop() {
  // put your main code here, to run repeatedly:
  // 0: a b c d e f
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6, HIGH);
  delay(1500);
  // 1: b c
  digitalWrite(D0, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, HIGH);
  delay(1500);
  // 2: a b d e g
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, LOW);
  delay(1500);
  // 3: a b c d g
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, LOW);
  delay(1500);
  // 4: b c f g
  digitalWrite(D0, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  delay(1500);
  // 5: a c d f g
  digitalWrite(D0, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  delay(1500);
  // 6: a c d e f g
  digitalWrite(D0, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  delay(1500);
  // 7: a b c
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, HIGH);
  delay(1500);
  // 8: a b c d e f g
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  delay(1500);
  // 9: a b c d f g
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  delay(1500);
}
