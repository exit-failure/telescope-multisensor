#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>
#include "LCDControl.h"

struct Config {
    
    //communication
    bool serialEnabled = false;
    bool debugOutput = false;
    
    //LCD
    uint8_t rows = 0;
    uint8_t columns = 0;

    t_backlightPol backlightPolarity = POSITIVE;
    uint8_t backlightInitialIntensity = 0;

    uint8_t pinD4 = 0;
    uint8_t pinD5 = 0;
    uint8_t pinD6 = 0;
    uint8_t pinD7 = 0;
    uint8_t pinEnable = 0;
    uint8_t pinReset = 0;
    uint8_t pinBacklight = 0;
    uint8_t pinContrast = 0;


}; //struct Config

#endif //CONFIG_H