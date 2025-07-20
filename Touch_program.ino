#define TOUCH_PIN D7
  // Use D5 instead of D8

void setup() {
  Serial.begin(9600);
  pinMode(TOUCH_PIN, INPUT);
}

void loop() {
  int touchState = digitalRead(TOUCH_PIN);

  if (touchState == HIGH) {
    Serial.println("Touched!");
  } else {
    Serial.println("Not touched");
  }

  delay(200);
}
