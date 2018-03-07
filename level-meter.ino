

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
  if (sensorValue > 255) {
    analogWrite(ledBotPin, 255);
  }
  else {
    analogWrite(ledBotPin, 0);
  }
  
  if (sensorValue > 510) {
    analogWrite(ledMidPin, 255);
  }
   else {
    analogWrite(ledMidPin, 0);
  }

  if (sensorValue > 765) {
    analogWrite(ledTopPin, 255);
  }
   else {
    analogWrite(ledTopPin, 0);
  }
 
  
}
