#include "MQ2Sensor.h"

const int MQ_PIN = 9;
const int MQ_DELAY = 5000;

MQ2Sensor sensor(MQ_PIN);

void setup() {
  sensor.begin();
}

void loop() {
  sensor.detect();
  delay(MQ_DELAY);
}
