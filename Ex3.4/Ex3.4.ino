int counter = 0; // ประกาศตัวแปรนับรอบไว้ด้านนอก

void setup() {
  Serial.begin(115200);
}

void loop() {
  // แสดงค่าตัวนับปัจจุบัน
  Serial.print("Counter: ");
  Serial.println(counter);

  // เงื่อนไข: ถ้าตัวนับถึง 10 ให้เริ่มใหม่ที่ 0
  if (counter >= 10) {
    counter = 0;
  } else {
    counter++; // เพิ่มค่าทีละ 1
  }

  // หน่วงเวลา 1 วินาที (1000 มิลลิวินาที)
  delay(1000);
}