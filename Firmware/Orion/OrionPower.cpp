#include "OrionPower.h"

const uint8_t chrgPin = 27;
const uint8_t battPin = A4;
const uint8_t gpsPwrPin = 2;

const uint16_t AREF = 3300;
const uint16_t adcResolution = 1023;

OrionPower::OrionPower(){
}
    
void OrionPower::begin()
{
  pinMode(chrgPin,INPUT);
  pinMode(gpsPwrPin,OUTPUT);
}

//Returns whether or not the battery is charging
bool OrionPower::isCharging()
{
  return !digitalRead(chrgPin);  //return 0 if charging, 1 if not charging
}
  
uint16_t OrionPower::getBatteryVoltage()
{
  uint16_t val = analogRead(battPin);  //10-bit ADC, will return a number 0 (0V) to 1023 (3.3V)
  uint16_t voltage = AREF*(val/(float)adcResolution);
  return voltage;
  }

void OrionPower::enableGPS(){
  digitalWrite(gpsPwrPin, HIGH);  //enables regulator, turning ON GPS circuit
  }
void OrionPower::disableGPS(){
   digitalWrite(gpsPwrPin, LOW);  //disables regulator, turning OFF GPS circuit
  }

void OrionPower::enableMP3(){
  }
  
void OrionPower::disableMP3(){
  }
