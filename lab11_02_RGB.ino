// กำหนดพอร์ตสำหรับ LED RGB
const int RED_PIN = 8;    // ขา Red
const int GREEN_PIN = 7;  // ขา Green
const int BLUE_PIN = 6;   // ขา Blue

void setup() {
  // กำหนดพอร์ตให้เป็น OUTPUT
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  // let you cook here
  digitalWrite(RED_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  delay(1000);
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
  delay(1000);
  digitalWrite(BLUE_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  delay(1000);
  digitalWrite(RED_PIN, LOW);
  delay(1000);
  digitalWrite(BLUE_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(1000);
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  delay(1000);
  digitalWrite(RED_PIN, LOW);
  delay(1000);
}