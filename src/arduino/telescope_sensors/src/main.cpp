//defines
#define _VERSION_ "0.1"

#define PIN_RESET 7
#define PIN_ENABLE 8
#define PIN_D4 9
#define PIN_D5 10
#define PIN_D6 11
#define PIN_D7 12
#define PIN_BACKLIGHT A1
#define PIN_CONTRAST A2

#define BACKLIGHT_POLARITY POSITIVE
#define BACKLIGHT_INITIAL_INTENSITY 100;

#define ROW_COUNT 2
#define COLUMN_COUNT 16

//libs
#include <Arduino.h>
#include <LiquidCrystal.h>
#include "LCDControl.h"
#include "Config.h"


//functions
void setLCDConfig();

//constants
static Config _config;

void setup() {
    setLCDConfig();
    static LCDControl _lcd(_config);
    _lcd.printToLCD(0, 1, "Telescope Tools");
    _lcd.printToLCDAligned(0, LCDControl::Alignment::right, "HKraft");
    _lcd.printToLCDAligned(0, LCDControl::Alignment::left, "v0.1");
}

void loop() {

    //TODO
}

void setLCDConfig() {
    _config.rows = ROW_COUNT;
    _config.columns = COLUMN_COUNT;

    _config.pinReset = PIN_RESET;
    _config.pinEnable = PIN_ENABLE;
    _config.pinD4 = PIN_D4;
    _config.pinD5 = PIN_D5;
    _config.pinD6 = PIN_D6;
    _config.pinD7 = PIN_D7;
    _config.pinBacklight = PIN_BACKLIGHT;
    _config.backlightPolarity = BACKLIGHT_POLARITY;
    _config.backlightInitialIntensity = BACKLIGHT_INITIAL_INTENSITY;
    _config.pinContrast = PIN_CONTRAST;
}