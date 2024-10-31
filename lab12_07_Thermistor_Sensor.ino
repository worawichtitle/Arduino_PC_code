const float resistor = 10000;

int ThermistorPin = A3;

void setup() {
  Serial.begin(9600);
}

void loop() {

  int sensorValue = analogRead(A3);
  float thermistorResistance = resistor * (1023.0 / sensorValue - 1.0);
  float voltage = thermistorResistance / (10000 + thermistorResistance) * 5;
  float Tc = voltage * 10;

  Serial.print("Temperature: "); 
  Serial.print(Tc);
  Serial.println(" C");

  delay(500);
}