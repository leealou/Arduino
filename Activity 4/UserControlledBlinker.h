void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
//Declarations
 int num;
 int data = 5;
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    data = Serial.parseInt();
    num = constrain(data, 1, 10);
  }
  else
  {
    delay(200 * num);
    digitalWrite(13, HIGH);
    delay(200 * num);
    digitalWrite(13, LOW);
  }
  
}
