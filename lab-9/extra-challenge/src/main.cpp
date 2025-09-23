#include "HardwareSerial.h"
#include <Arduino.h>

const int LED_PINS[] = {3, 4, 5, 6};
const int LED_PINS_SIZE = 4;

#define POTENTIOMETER_PIN A0

void setup() {
    Serial.begin(9600);

    for (int i = 0; i < LED_PINS_SIZE; i++) {
        pinMode(LED_PINS[i], OUTPUT);
    }
    pinMode(POTENTIOMETER_PIN, INPUT);
}

void loop() {
    int potentiometerValue = analogRead(POTENTIOMETER_PIN);

    for (int i = 0; i < LED_PINS_SIZE; i++) {
        digitalWrite(LED_PINS[i], LOW);
    }

    if (potentiometerValue <= 256) {
        digitalWrite(LED_PINS[0], HIGH);
    } else if (potentiometerValue <= 512) {
        digitalWrite(LED_PINS[1], HIGH);
    } else if (potentiometerValue <= 768) {
        digitalWrite(LED_PINS[2], HIGH);
    } else {
        digitalWrite(LED_PINS[3], HIGH);
    }
}
