float tempC;
float reading;
float tempPin = 0;

void setup() {
  // put your setup code here, to run once:
  analogReference(INTERNAL);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(tempPin);
  tempC = 1.1 * reading / 1024 * 100;
  Serial.print("Farenheit: ");
  Serial.println(tempC);
  delay(1000);
}
