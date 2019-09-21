#include "LCDControl.h"
#include "Error.h"

LCDControl::LCDControl(uint8_t reset, uint8_t enable, uint8_t D4, uint8_t D5, uint8_t D6, uint8_t D7,
    uint8_t backlightPin, t_backlightPol backlightPolarity, uint8_t contrastPin, uint8_t rows, uint8_t columns) :
    LiquidCrystal(reset, enable, D4, D5, D6, D7, backlightPin, backlightPolarity),
    _rows(rows),
    _columns(columns),
    _contrastPin(contrastPin) {
        begin(rows, columns);
    }


void LCDControl::printToLCD(uint8_t line, uint8_t start, const String &text) {
    if (text.length() + start > _columns) {
        printError(ERR_LINE_OVERFLOW);
    }
    setCursor(line, start);
    print(text);
}

void LCDControl::printToLCDAligned(uint8_t line, Alignment align, const String &text) {
    uint8_t start;

    switch(align) {
        case left: {
            start = 0;
        }
        case right: {
            start = (_columns - text.length() - 1);
        }
        case center: {
            start = (_columns - text.length() - 1) / 2;
        } 
    }
    printToLCD(line, start, text);
}

void LCDControl::printError(const ErrorType error) {
    //TODO print to serial
    clear();
    if(error.errNo != 0) {
        printToLCD(0, 0, "ERROR(" + String(error.errNo)  + "):");
    }
    else {
        printToLCD(0, 0, "ERROR:");
    }
    printToLCD(0, 1, error.errorText);
}