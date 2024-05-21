const int buttonPin = 18;  // GPIO pin for button input
bool buttonPressed = false;
const int ledPin = 2;

void setup() {
  pinMode(buttonPin, INPUT);  // Default Serial for USB communication
  pinMode(ledPin,OUTPUT);
  Serial1.begin(9600, SERIAL_8N1, 3, 1);  // Serial1 for communication with Arduino Due (TX=1, RX=3)
}

void loop(){
    if(digitalRead(buttonPin==LOW)){Serial1.println("Hi From ESP");ledCall();}
    else{Serial1.println("No Button, NO Hi ESP");
    digitalWrite(ledPin,LOW);}
}
void ledCall() {
  digitalWrite(ledPin,HIGH);
  delay(200);
  digitalWrite(ledPin,LOW);
  delay(200);
  digitalWrite(ledPin,HIGH);
  delay(200);
  digitalWrite(ledPin,LOW);
  delay(200);
  digitalWrite(ledPin,HIGH);
  delay(200);
  digitalWrite(ledPin,LOW);
  delay(200);
  digitalWrite(ledPin,HIGH);
  delay(200);
  digitalWrite(ledPin,LOW);
  delay(200);
  digitalWrite(ledPin,HIGH);
  delay(200);
  digitalWrite(ledPin,LOW);
  delay(200);
}
