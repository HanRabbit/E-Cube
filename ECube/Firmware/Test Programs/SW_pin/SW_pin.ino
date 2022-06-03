#define P1 25
#define P2 26
#define P3 27

void setup() {
  // put your setup code here, to run once:
  pinMode(P1, INPUT);
  pinMode(P2, INPUT);
  pinMode(P3, INPUT_PULLUP);

  Serial.begin(115200);
}

void printPin(int pin) {
  Serial.print(pin);
  Serial.print(" = ");
  Serial.println(analogRead(pin));
}

void loop() {
  // put your main code here, to run repeatedly:
  printPin(P1);
  printPin(P2);
  printPin(P3);

  delay(200);
}
