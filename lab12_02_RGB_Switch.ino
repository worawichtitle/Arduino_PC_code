const int BTN_RED = 4;
const int BTN_GREEN = 5;
const int BTN_BLUE = 6;

const int L_RED = 8;
const int L_GREEN = 9;
const int L_BLUE = 10;

void setup() {
  pinMode(BTN_RED, INPUT);
  pinMode(BTN_GREEN, INPUT);
  pinMode(BTN_BLUE, INPUT);
  
  pinMode(L_RED, OUTPUT);
  pinMode(L_GREEN, OUTPUT);
  pinMode(L_BLUE, OUTPUT);
}

void loop() {
  change_stat(BTN_RED, L_RED);
  change_stat(BTN_GREEN, L_GREEN);
  change_stat(BTN_BLUE, L_BLUE);
  delay(5);
}

void change_stat(int btn_pin, int led_pin) {
  if (digitalRead(btn_pin) == LOW) {
      digitalWrite(led_pin, LOW);
    } else {
      digitalWrite(led_pin, HIGH);
    }
    delay(100);
}