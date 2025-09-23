#include <Arduino.h>

#include "HardwareSerial.h"

#define LED_PIN 3

void setup() {
    Serial.begin(9600);

    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}
