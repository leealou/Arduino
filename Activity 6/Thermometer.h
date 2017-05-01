//const int pinTemp = A0 (I'm not sure if this might be needed or not...)
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value;
  value = analogRead(0);
  Serial.println(value);
  delay(1000);
}
