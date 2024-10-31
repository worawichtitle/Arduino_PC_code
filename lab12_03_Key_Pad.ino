#include <Keypad.h>

const byte numRows = 4; // Number of rows on the keypad
const byte numCols = 4; // Number of columns on the keypad

const int LED_R = 10;
const int LED_G = 11;
const int LED_B = 12;


// Keymap defines the key pressed according to the row and columns
char keymap[numRows][numCols] = 
{
  {'1', '2', '3', 'A'}, 
  {'4', '5', '6', 'B'}, 
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

// Keypad connections to the Arduino pins
byte rowPins[numRows] = {9, 8, 7, 6}; // Rows 0 to 3
byte colPins[numCols] = {5, 4, 3, 2}; // Columns 0 to 3

// Initializes an instance of the Keypad class
Keypad myKeypad = Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);

void setup() {
    Serial.begin(9600);
    pinMode(LED_R, OUTPUT);
    pinMode(LED_G, OUTPUT);
    pinMode(LED_B, OUTPUT);

}

void loop() {
    char keypressed = myKeypad.getKey();
    if (keypressed != NO_KEY) {
        Serial.println(keypressed);
        switch (keypressed) {
            case '7':
                digitalWrite(LED_R, LOW);
                digitalWrite(LED_G, HIGH);
                digitalWrite(LED_B, HIGH);
                break;
            case '8':
                digitalWrite(LED_R, HIGH);
                digitalWrite(LED_G, LOW);
                digitalWrite(LED_B, HIGH);
                break;
            case '9':
                digitalWrite(LED_R, HIGH);
                digitalWrite(LED_G, HIGH);
                digitalWrite(LED_B, LOW);
                break;
            case '0':
                digitalWrite(LED_R, LOW);
                digitalWrite(LED_G, LOW);
                digitalWrite(LED_B, HIGH);
                break;
            
            
            
            default:
                digitalWrite(LED_R, HIGH);
                digitalWrite(LED_G, HIGH);
                digitalWrite(LED_B, HIGH);
                break;
        }
    }
}