int num_array[10][7] = {  { 1,1,1,1,1,1,0 },    // 0
                          { 0,1,1,0,0,0,0 },    // 1
                          { 1,1,0,1,1,0,1 },    // 2
                          { 1,1,1,1,0,0,1 },    // 3
                          { 0,1,1,0,0,1,1 },    // 4
                          { 1,0,1,1,0,1,1 },    // 5
                          { 1,0,1,1,1,1,1 },    // 6
                          { 1,1,1,0,0,0,0 },    // 7
                          { 1,1,1,1,1,1,1 },    // 8
                          { 1,1,1,0,0,1,1 }	    // 9
                       };

// Define the pins for each segment of the 7-segment display
const int segment_a = 2; 
const int segment_b = 3; 
const int segment_c = 4;
const int segment_d = 5;
const int segment_e = 6;
const int segment_f = 7;
const int segment_g = 8;

const int power_front = 13;
const int power_back = 12;

void setup() { 
  // set pin modes for each segment
  pinMode(segment_a, OUTPUT);   
  pinMode(segment_b, OUTPUT);   
  pinMode(segment_c, OUTPUT);   
  pinMode(segment_d, OUTPUT);   
  pinMode(segment_e, OUTPUT);   
  pinMode(segment_f, OUTPUT);   
  pinMode(segment_g, OUTPUT);
  
  pinMode(power_front, OUTPUT);
  pinMode(power_back, OUTPUT);
}

void loop() {
  // Loop through each digit (0-9)
  for (int i = 0; i < 100; i++){
    //ใช้ i < 100 มาจาก 1000(1 วิ) / (5 + 5) = 100
    digitalWrite(power_front, LOW);
    digitalWrite(power_back, HIGH);
    displayDigit(6);
    delay(5); // ใช้ 5 = 0.005 วินาทีในการสลับ
    digitalWrite(power_front, HIGH);
    digitalWrite(power_back, LOW);
    delay(5);
  }
  for (int i = 0; i < 100; i++){
    digitalWrite(power_front, LOW);
    digitalWrite(power_back, HIGH);
    displayDigit(0);
    delay(5);
    digitalWrite(power_front, HIGH);
    digitalWrite(power_back, LOW);
    displayDigit(7);
    delay(5);
  }
  for (int i = 0; i < 100; i++){
    digitalWrite(power_front, LOW);
    digitalWrite(power_back, HIGH);
    displayDigit(0);
    delay(5);
    digitalWrite(power_front, HIGH);
    digitalWrite(power_back, LOW);
    displayDigit(1);
    delay(5);
  }
  for (int i = 0; i < 100; i++){
    digitalWrite(power_front, LOW);
    digitalWrite(power_back, HIGH);
    displayDigit(8);
    delay(5);
    digitalWrite(power_front, HIGH);
    digitalWrite(power_back, LOW);
    displayDigit(0);
    delay(5);
  }
}

// Function to display a specific digit on the 7-segment display
void displayDigit(int digit) {
  // Set each segment according to the num_array for the given digit
  digitalWrite(segment_a, num_array[digit][0]);
  digitalWrite(segment_b, num_array[digit][1]);
  digitalWrite(segment_c, num_array[digit][2]);
  digitalWrite(segment_d, num_array[digit][3]);
  digitalWrite(segment_e, num_array[digit][4]);
  digitalWrite(segment_f, num_array[digit][5]);
  digitalWrite(segment_g, num_array[digit][6]);
}