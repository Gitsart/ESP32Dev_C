const int buttonPin = 4;
void setup() {
  // Initialize Serial communication
  Serial.begin(115200);  // Default Serial for USB communication
  Serial1.begin(9600, SERIAL_8N1, 3, 1);  // Serial1 for communication with Arduino Due (TX=1, RX=3)
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(buttonPin==LOW)) {
    Serial1.println("Hello from ESP32!");
  delay(1000);
  }
}
