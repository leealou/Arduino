//const int pinTemp = A0 (I'm not sure if this might be needed or not...)
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float value; 
  value = ((((5.0 * analogRead(0) / 1024) * 100.0);
  Serial.print("Celcius: ");
  Serial.println(value);
  //Serial.("Farenheit: ");
  //Serial.println((value * 1.8) + 32);
  delay(1000);
}
