void setup() {
  // เริ่มต้นการสื่อสารผ่าน Serial ที่ความเร็ว 9600 bps
  Serial.begin(115200);

  // ประกาศตัวแปรและค่าคงที่
  String name = "Somchai"; // เก็บข้อความ (ชื่อ)
  int age = 15;            // เก็บจำนวนเต็ม (อายุ)
  float score = 85.5;      // เก็บทศนิยม (คะแนน)
  const int MAX_SCORE = 100; // ค่าคงที่ (คะแนนเต็ม)

  // แสดงผลข้อมูลออกทาง Serial Monitor
  Serial.print("Name: ");
  Serial.println(name);
  
  Serial.print("Age: ");
  Serial.println(age);
  
  Serial.print("Score: ");
  Serial.print(score);
  Serial.print(" / ");
  Serial.println(MAX_SCORE);
}

void loop() {
  // ไม่มีการทำงานซ้ำในส่วนนี้
}