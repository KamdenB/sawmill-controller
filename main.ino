#include <Keypad.h>
#include "StepperControl.h"
#include "Display.h"
#include "KeypadControl.h"

int mode = 0; // Program mode

const int homeButtonPin = 12; // Home button (mode: home) 
const int manualButtonPin = 13; // Manual mode button (mode: manual)
const int presetButtonPin = 14; // Preset mode button (mode: preset)
const int enterButtonPin = 15; // Enter button (mode: options enter)

// we need a go button



// blade width = 0.85in

// display to display the current value of this button
// button to add 3.5 in + a blade width
// user enters the the number 3.5in + blade width 

// display to display the current value of this button
// button to add 5.5 in + blade width
// user enters the the number 5.5in + blade width

// display to display the current value of this button
// button to add 4 7/8 in + blade width
// user enters the the number 4 7/8 in + blade width

// button to add blade width
// functionality to move the blade width back down.
// user enters the the number 0.85in + blade width
// total number of blade widths added to total move distance displayed on small lcd

// undo button

// clear everything button  

// functionality to hit a number on the numpad move that many blade width

// dial to move the blade up and down (manual jog mode)

const int distanceToMove = 100; // Distance to move in 100th's of an inch - 100 = 0.1in

KeypadControl keypadControl;

void setup(){
  pinMode(homeButtonPin, INPUT); // Home button input mode

  stepperControl.setup(); // Setup the setpper motor
  display.setup(); // Setup the display
}

void loop() {
  char customKey = customKeypad.getKey(); // Key hit by custom keypad

  int homeButton = digitalRead

  int homeButtonState = digitalRead(homeButtonPin);

  // Set mode to home
  if(homeButtonState == HIGH) {
    mode = 1;
  }
  
  // Set mode to manual
  if(manualButtonState == HIGH) {
    mode = 2;
  }

  // Set mode to preset
  if(presetButtonState == HIGH) {
    mode = 3;
  }

  // Enter button
  if(enterButtonState == HIGH) {
    // TOOD: Enter button code
  }

  if(customKey) {
    lcd.setCursor(0, 1);
    lcd.print("You pressed: ");
    lcd.print(customKey);

    handleKeypadInput(customKey);
  }

  switch(mode) {
    case 1:
      // Home mode
      break;
    case 2:
      // Manual mode
      manualMode();
      break;
    case 3:
      // Preset mode
      break;
    default:
      // Default mode
      break;
  }
}

void handleKeypadInput(char customKey) {
  // keypad code
}

void updateLCD(String message) {

}

void manualMode() {

}

void presetMode() {

}