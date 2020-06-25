#ifdef OrionPower_h
#define OrionPower_h

#include <Arduino.h>

class OrionPower
{
private:

public:
  OrionPower();
  void begin();

  bool isCharging();
  uint16_t getBatteryVoltage();

  void enableGPS();
  void disableGPS();

  void enableMP3();
  void disableMP3();
};

#endif
