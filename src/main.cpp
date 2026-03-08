#include <Arduino.h>

static int buttonPin = 2;
static int ledPin = 13;
static int buttonState = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello world");
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
};

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == 1) {
    digitalWrite(ledPin, HIGH);

    Serial.println("pushed ---");
  } else {
    digitalWrite(ledPin, LOW);
  };
};
