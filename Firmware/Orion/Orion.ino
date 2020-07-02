#include "OrionPower.h"

OrionPower pwr;

void setup() {
  pwr.begin();

}

void loop() {
  bool chrgStatus = pwr.isCharging();
  uint16_t battVoltage = pwr.getBatteryVoltage();

}
