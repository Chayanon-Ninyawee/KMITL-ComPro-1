#include <Arduino.h>

#include "HardwareSerial.h"

#define POTENTIOMETER_PIN A0

void setup() {
    Serial.begin(9600);

    pinMode(POTENTIOMETER_PIN, INPUT);
}

void loop() {
    int potentiometerValue = analogRead(POTENTIOMETER_PIN);
    Serial.println(potentiometerValue);

    delay(1000);
}
