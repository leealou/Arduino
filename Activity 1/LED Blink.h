void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); //LED on
  delay(1000);            //One second dekay
  digitalWrite (13, LOW); //LED off
  delay(1000);          //One second delay
}
