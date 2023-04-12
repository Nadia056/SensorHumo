#include "MQ2Sensor.h"

MQ2Sensor::MQ2Sensor(int pin) : _pin(pin) {}

void MQ2Sensor::begin() {
  Serial.begin(9600);
}

bool MQ2Sensor::detect() {
  bool state = digitalRead(_pin);

  if (!state) {
    Serial.println("Deteccion");
    return true;
  } else {
    Serial.println("No detectado");
    return false;
  }
}
