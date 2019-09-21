#define _VERSION_ "0.1"

//Set the number of lines and columns of your LCD. Set to 
#define LCD_LINES 2
#define LCD_COLUMNS 16


#include <Arduino.h>
#include <LiquidCrystal.h>

class LCDControl: public LiquidCrystal {
    
    //class variables
    public:
        enum Alignment {left, right, center};
    private:
        //LiquidCrystal _lcd;
        uint8_t _rows, _columns, _contrastPin;


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
        LCDControl(uint8_t reset, uint8_t enable, uint8_t D4, uint8_t D5, uint8_t D6, uint8_t D7,
            uint8_t backlightPin, t_backlightPol polarity, uint8_t contrastPin, uint8_t rows, uint8_t columns);
        void printLineToLCD(uint8_t line, uint8_t start, String text);
        void printToLCDAligned(uint8_t line, Alignment align, String text);


    



}; //class LCDControl