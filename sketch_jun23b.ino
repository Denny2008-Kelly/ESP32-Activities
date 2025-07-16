const int potPin = 32;

int potValue;
float voltage = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  potValue = analogRead(potPin);
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  delay(50);
}
