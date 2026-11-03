#define LED_PIN  17
#define BUTTON_A 16


void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_A, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(BUTTON_A) == LOW) {
        digitalWrite(LED_PIN,LOW);
        Serial.println('ติด');
    } else {
        digitalWrite(LED_PIN, HIGH);
        Serial.println('ติด');
    }
}
