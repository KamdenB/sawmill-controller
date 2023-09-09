#include "Display.h"

// Define lcd pinout
// pins 8, 9, 4, 5, 6, 7
Display::Display() : lcd(8, 9, 4, 5, 6, 7) {}

// Setup the display
void Display::setup() {
  lcd.begin(20, 4); // 20x4 display
  lcd.setCursor(0, 0);
  lcd.print("Hello, world!");
  // lcd.clear();
}

void Display::loop() {

}

// Main menu
/**************************************/
/*                                    */
/*        Saw Mill Controller         */
/*                                    */
/*                                    */
/*  home    manual   preset    enter  */
/**************************************/
void Display::menuView(int optionPosition) {
  // home = 0
  // manual = 1
  // preset = 2
  // enter = 3;
}

// Manual jog view
void Display::manualJogView(int distance) {

/**************************************/
/*                                    */
/*         Jog Distance: 0.00         */
/*                                    */
/*                                    */
/*  home    manual   preset    enter  */
/**************************************/

}

// Preset mode view
void Display::presetModeView() {

}
