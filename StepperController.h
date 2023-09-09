#ifndef StepperControl_h
#define StepperControl_h

#include <AccelStepper.h>

class StepperControl {
  public:
    StepperControl();
    void setup();
    void loop();
    void moveStepper();

  private:
    const int stepPin = 8;
    const int dirPin = 9;
    const float acceleration = 10000.0;
    const float maxSpeed = 10000.0;
    const float bladeWidth = 0.85;
    const int stepsPerRevolution = 400;
    AccelStepper stepper;
};

#endif
