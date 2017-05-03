void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  if (sensorValue < 600) // To change the point at which the light turns on change this value.
  {
    digitalWrite(13, HIGH);
  }
  else 
  {
    digitalWrite(13,LOW);
  }
}
