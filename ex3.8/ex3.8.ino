const int BUTTON_PIN = 2; // ขาปุ่มกด A
const int LED_PIN = 13;   // ขา LED

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP); // ตั้งเป็น INPUT_PULLUP (กดแล้วจะได้ค่า LOW)
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  // เมื่อกดปุ่ม สถานะจะเป็น LOW
  if (buttonState == LOW) {
    digitalWrite(LED_PIN, HIGH); // เปิด LED
  } else {
    digitalWrite(LED_PIN, LOW);  // ปิด LED
  }
}