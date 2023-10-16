#define LED_PIN 2

int reading = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  reading = analogRead(A4);
  digitalWrite(LED_PIN, HIGH);
  delay(reading);
  digitalWrite(LED_PIN, LOW);
  delay(reading);
}
