#define _VERSION_ "0.1"

//Set the number of lines and columns of your LCD. Set to 
#define LCD_LINES 2
#define LCD_COLUMNS 16


#include <Arduino.h>
#include <LiquidCrystal.h>

class LCDControl:LiquidCrystal {
    //functions

    /*
    * Sum numbers in a vector.
    *
    * @param lcd the display to write to
    * @return this finction does not return
    */
    public:
        LCDControl();
        LCDControl(int RS, int ENABLE, int D4, int D5, int D6, int D7, int rows, int columns);
        void printLineToLCD(byte line, byte start, String text);


    //class variables
    private:
        LiquidCrystal _lcd;
        int _rows, _columns;

}; //class LCDControl