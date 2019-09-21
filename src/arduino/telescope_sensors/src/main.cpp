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

#define ROW_COUNT 2
#define COLUMN_COUNT 16

//libs
#include <Arduino.h>
#include <LiquidCrystal.h>
#include "LCDControl.h"

//constants
LCDControl lcd(PIN_RESET, PIN_ENABLE, PIN_D4, PIN_D5, PIN_D6, PIN_D7, PIN_BACKLIGHT, BACKLIGHT_POLARITY, PIN_CONTRAST, ROW_COUNT, COLUMN_COUNT);


void setup() {
    lcd.printLineToLCD(0, 1, "Telescope Tools");
    lcd.printLineToLCD(0, 1, "HKraft     v0.1");
}

void loop() {
}


