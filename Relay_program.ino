#define RELAY_PIN D5 // GPIO12

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH); // Turn relay OFF initially
}

void loop() {
  // Turn relay ON
  digitalWrite(RELAY_PIN, LOW);
  delay(1000);

  // Turn relay OFF
  digitalWrite(RELAY_PIN, HIGH);
  delay(1000);
}
