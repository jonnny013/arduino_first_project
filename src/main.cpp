#include <Arduino.h>

static int buttonPin = 2;
static int redLed1Pin = 5;
static int redLed2Pin = 4;
static int greenLedPin = 3;
static int buttonState = 0;

void setup() {
  pinMode(redLed1Pin, OUTPUT);
  pinMode(redLed2Pin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(buttonPin, INPUT);
};

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == 1) {
    digitalWrite(redLed1Pin, HIGH);
    delay(1000);
    digitalWrite(redLed2Pin, HIGH);
    delay(1000);
    digitalWrite(greenLedPin, HIGH);
  } else {
    digitalWrite(redLed1Pin, LOW);
    digitalWrite(redLed2Pin, LOW);
    digitalWrite(greenLedPin, LOW);
  };
};
