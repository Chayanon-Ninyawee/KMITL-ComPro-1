#include "HardwareSerial.h"
#include <Arduino.h>

const int LED_PINS[] = {3, 4, 5, 6, 7};
const int LED_PINS_SIZE = 5;

void setup() {
    Serial.begin(9600);

    for (int i = 0; i < LED_PINS_SIZE; i++) {
        pinMode(LED_PINS[i], OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < LED_PINS_SIZE; i++) {
        for (int j = 0; j < LED_PINS_SIZE; j++) {
            digitalWrite(LED_PINS[j], LOW);
        }
        digitalWrite(LED_PINS[i], HIGH);

        delay(500);
    }
    for (int i = 0; i < LED_PINS_SIZE; i++) {
        for (int j = 0; j < LED_PINS_SIZE; j++) {
            digitalWrite(LED_PINS[j], LOW);
        }
        digitalWrite(LED_PINS[LED_PINS_SIZE - i - 1], HIGH);

        delay(500);
    }
}
