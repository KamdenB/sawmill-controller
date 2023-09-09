#ifndef KeypadControl_h
#define KeypadControl_h

#include <Keypad.h>

class KeypadControl {
  public:
    KeypadControl();
    char getKey();

  private:
    static const byte ROWS = 4; 
    static const byte COLS = 4;
    char hexaKeys[ROWS][COLS] = {
      {'1', '2', '3', 'A'},
      {'4', '5', '6', 'B'},
      {'7', '8', '9', 'C'},
      {'*', '0', '#', 'D'}
    };
    byte rowPins[ROWS] = {9, 8, 7, 6}; 
    byte colPins[COLS] = {5, 4, 3, 2}; 
    Keypad customKeypad;
};

#endif
