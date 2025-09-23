#include <Arduino.h>

#include "HardwareSerial.h"

#define LED_PIN 3
#define POTENTIOMETER_PIN A0

void setup() {
    Serial.begin(9600);

    pinMode(LED_PIN, OUTPUT);
    pinMode(POTENTIOMETER_PIN, INPUT);
}

void loop() {
    int potentiometerValue = analogRead(POTENTIOMETER_PIN);

    if (potentiometerValue >= 512) {
        digitalWrite(LED_PIN, HIGH);
    } else {
        digitalWrite(LED_PIN, LOW);
    }
}
