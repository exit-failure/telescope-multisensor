#ifndef LCDCONTROL_H
#define LCDCONTROL_H


#define _LCDCONTROL_VERSION_ "0.1"

//Set the number of lines and columns of your LCD. Set to 
#define LCD_LINES 2
#define LCD_COLUMNS 16


#include <Arduino.h>
#include "Config.h"
#include "LiquidCrystal.h"
#include "Error.h"


class LCDControl: public LiquidCrystal {
    public:
        enum Alignment {left, right, center};
    private:
        Config &_config;


    //functions

    /*
    * Constructs a LCDControl object
    *
    * @param    reset           DIGITAL pin connected to RS
    * @param    enable           DIGITAL pin connected to E
    * @param    D4              DIGITAL pin connected to D4
    * @param    D5              DIGITAL pin connected to D5
    * @param    D6              DIGITAL pin connected to D6
    * @param    D7              DIGITAL pin connected to D7
    * @param    backlightPin    PWM pin connected to V0
    * @param    polarity        polarity of the backlight (POSTIVE/NEGATIVE)
    * @param    contrastPin     PWM pin connected to V0
    * @param    rows            number of rows the display has
    * @param    columns         number of columns the display has
    * @return                   nothing (constructor)
    */
    public:
        LCDControl(Config &config);
        //LCDControl(uint8_t reset, uint8_t enable, uint8_t D4, uint8_t D5, uint8_t D6, uint8_t D7, uint8_t backlightPin, t_backlightPol polarity, uint8_t contrastPin, uint8_t rows, uint8_t columns);
        void printToLCD(uint8_t row, uint8_t column, const String &text);
        void printToLCDAligned(uint8_t row, Alignment align, const String &text);
        void printError(const ErrorType &error);
        

    



}; //class LCDControl
#endif //LCDCONTROL_H