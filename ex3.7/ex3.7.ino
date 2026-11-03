void setup() {
  Serial.begin(115200);
  
  int number = 0; // ทดลองเปลี่ยนค่าตัวเลขตรงนี้ได้

  if (number > 0) {
    Serial.println("Positive");

  } else if (number < 0) {
    Serial.println("Negative");

  } else {
    Serial.println("Zero");
  }
}

void loop() {
  // ไม่มีการทำงานซ้ำ
}