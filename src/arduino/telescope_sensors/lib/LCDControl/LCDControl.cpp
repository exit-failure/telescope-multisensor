#include "LCDControl.h"

LCDControl::LCDControl(uint8_t reset, uint8_t enable, uint8_t D4, uint8_t D5, uint8_t D6, uint8_t D7,
    uint8_t backlightPin, t_backlightPol backlightPolarity, uint8_t contrastPin, uint8_t rows, uint8_t columns) :
    LiquidCrystal(reset, enable, D4, D5, D6, D7, backlightPin, backlightPolarity),
    _rows(rows),
    _columns(columns),
    _contrastPin(contrastPin) {
        begin(rows, columns);
    }


void LCDControl::printLineToLCD(uint8_t line, uint8_t start, String text) {
    if (text.length() + start > _columns) {
        printLineToLCD(0, 1, "ERROR:");
        printLineToLCD(1, 1, "line overflow");
    }
    setCursor(line, start);
    print(text);
}

void LCDControl::printToLCDAligned(uint8_t line, Alignment align, String text) {
    switch(align) {
        case left: {
            
        }
        case right: {
            
        }
        case center: {
            byte start = (_columns - text.length() - 1) / 2;
        }
    }
}