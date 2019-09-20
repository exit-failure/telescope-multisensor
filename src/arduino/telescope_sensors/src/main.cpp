//defines
#define _VERSION_ "0.1"

//libs
#include <Arduino.h>
#include <LiquidCrystal.h>
#include "LCDControl.h"

//constants
 LCDControl lcd(7, 8, 9, 10, 11, 12, 2, 16);

/*
LCD RS pin to digital pin 7
LCD Enable pin to digital pin 8
LCD D4 pin to digital pin 9
LCD D5 pin to digital pin 10
LCD D6 pin to digital pin 11
LCD D7 pin to digital pin 12
LCD R/W pin to ground
LCD VSS pin to ground
LCD VCC pin to 5V
10K resistor:
ends to +5V and ground
wiper to LCD VO pin (pin 3)
 */

void setup() {
}

void loop() {
}


