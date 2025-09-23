#include "HardwareSerial.h"
#include <Arduino.h>

#define POTENTIOMETER_PIN A0

void setup() {
    Serial.begin(9600);

    pinMode(POTENTIOMETER_PIN, INPUT);
}

void loop() {
    int potentiometerValue = analogRead(POTENTIOMETER_PIN);
    double potentiometerVoltage = 5.0 * (potentiometerValue / 1023.0);

    Serial.print("10 bits Val: ");
    Serial.println(potentiometerValue);
    Serial.print("Real Val: ");
    Serial.println(potentiometerVoltage);

    delay(1000);
}
