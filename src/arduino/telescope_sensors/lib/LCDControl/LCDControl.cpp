#include "LCDControl.h"

LCDControl::LCDControl(int RS, int ENABLE, int D4, int D5, int D6, int D7, int rows, int columns) : 
    _rows(rows), _columns(columns), _lcd(LiquidCrystal(RS, ENABLE, D4, D5, D6, D7)) {}

void LCDControl::printLineToLCD(byte line, byte start, String text){
  if (text.length() > 16)
  _lcd.setCursor(0, 1);
  _lcd.print("telescope multisensor");
  _lcd.setCursor(0, 1);
  _lcd.print("Hello, World!");
}