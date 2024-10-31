const int BTN = 2;
const int LED = 3;

bool is_led_on = true;

void setup()
{
  pinMode(BTN, INPUT_PULLUP);  // Use internal pull-up resistor
  pinMode(LED, OUTPUT);
}

void loop()
{
  // Read the button state
  if (digitalRead(BTN) == LOW) {
    is_led_on = !is_led_on;
    delay(100);  // Debounce delay
  }
  
  // Set LED state based on is_led_on
  if (is_led_on) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  
  delay(5);  // Short delay
}
