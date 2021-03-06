

int sensorPin = A0;    // select the input pin for the potentiometer
int ledBotPin = 5;      // select the pin for the LED
int ledMidPin = 11;
int ledTopPin = 13;    
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledBotPin, OUTPUT);
  pinMode(ledMidPin, OUTPUT);
  pinMode(ledTopPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);

  // potentiometer value
  Serial.println(sensorValue);

  // LED light change
    analogWrite(ledBotPin, 255);
    delay(1000);
    analogWrite(ledMidPin, 255);
    delay(750);
    analogWrite(ledTopPin, 255);
    delay(8000);
  
}
