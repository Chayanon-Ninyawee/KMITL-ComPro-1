#include <Arduino.h>

#include "HardwareSerial.h"

#define LED_PIN 3

void setup() {
    Serial.begin(9600);

    pinMode(LED_PIN, OUTPUT);
}

int ledValue = 255;
void loop() {
    analogWrite(LED_PIN, ledValue);

    ledValue--;
    if (ledValue < 0) ledValue = 0;

    delay(10);
}
