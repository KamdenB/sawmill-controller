#include "KeypadControl.h"

KeypadControl::KeypadControl() : customKeypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS) {}

char KeypadControl::getKey() {
    return customKeypad.getKey();
}
