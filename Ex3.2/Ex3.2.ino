void setup() {
  Serial.begin(9600);

  // ประกาศตัวแปรคำนวณ
  float a = 12.0;
  float b = 4.0;

  // คำนวณและแสดงผล
  Serial.print("a = "); Serial.println(a);
  Serial.print("b = "); Serial.println(b);
  Serial.println("--------------------");

  Serial.print("a + b = ");
  Serial.println(a + b);

  Serial.print("a - b = ");
  Serial.println(a - b);

  Serial.print("a * b = ");
  Serial.println(a * b);

  Serial.print("a / b = ");
  Serial.println(a / b);
}

void loop() {
  // ไม่มีการทำงานซ้ำในส่วนนี้
}