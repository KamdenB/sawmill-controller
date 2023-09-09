// StepperControl.cpp
#include "StepperControl.h"

StepperControl::StepperControl() : stepper(AccelStepper::DRIVER, stepPin, dirPin) {}

void StepperControl::setup() {
  stepper.setMaxSpeed(maxSpeed);
  stepper.setAcceleration(acceleration);
  stepper.setSpeed(maxSpeed);
  stepper.move(stepsPerRevolution * 20);
}

void StepperControl::loop() {
  if (stepper.distanceToGo() == 0) {
    // The motor has reached the target position
    // You can perform additional actions or set a new target position here
  }
  stepper.run();
}
