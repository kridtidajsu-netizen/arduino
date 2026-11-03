void setup() {
  Serial.begin(115200);
  Serial.println("Please enter temperature (°C):");
}

void loop() {
  // ตรวจสอบว่ามีการพิมพ์ข้อมูลเข้ามาทาง Serial หรือไม่
  if (Serial.available() > 0) {
    // อ่านค่าตัวเลขทศนิยมจาก Serial Monitor
    float temp = Serial.parseFloat();

    // แสดงอุณหภูมิที่ป้อนเข้ามา
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.print(" °C -> Status: ");

    // ตรวจสอบเงื่อนไขตามอุณหภูมิ
    if (temp < 20.0) {
      Serial.println("COLD");
    } else if (temp >= 20.0 && temp <= 30.0) {
      Serial.println("NORMAL");
    } else {
      Serial.println("HOT");
    }

    Serial.println("Please enter next temperature (°C):");
  }
}