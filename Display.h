#include <LiquidCrystal.h>

class Display {
  public: 
    Display();
    void setup();
    void loop();
    void menuView(int optionPosition);
    void manualJogView();
    void presetModeView();

  private:
    LiquidCrystal lcd;
};

