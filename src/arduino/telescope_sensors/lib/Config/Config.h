#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>
#include <DHT.h>
#include "LCDControl.h"


struct Config {
    
    //communication
    bool serialEnabled = false;
    bool debugOutput = false;
    
    //LCD
    uint8_t rows = 2;
    uint8_t columns = 16;

    t_backlightPol backlightPolarity = POSITIVE;
    uint8_t backlightInitialIntensity = 100;

    uint8_t pinD4 = 9;
    uint8_t pinD5 = 10;
    uint8_t pinD6 = 11;
    uint8_t pinD7 = 12;
    uint8_t pinEnable = 8;
    uint8_t pinReset = 7;
    uint8_t pinBacklight = A1;
    uint8_t pinContrast = A2;

    //temperature and humidity Sensor
    uint8_t type = DHT12; //DHT 11; DHT22 (AM2302/AM2321); DHT21 (AM2301)
    uint8_t tempSensorPin = 3; //Digital pin connected to the DHT sensor


}; //struct Config

#endif //CONFIG_H