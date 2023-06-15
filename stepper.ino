#include <AccelStepper.h>

// Define the step and direction pins
const int stepPin = 8;
const int dirPin = 9;

// Define acceleration and maximum speed values
const float acceleration = 10000;   // Adjust as needed
const float maxSpeed = 10000.0;    // Adjust as needed

// Define number of steps per revolution for your motor and microstepping mode
const int stepsPerRevolution = 400;

// Create an instance of the AccelStepper class
AccelStepper stepper(AccelStepper::DRIVER, stepPin, dirPin);

void setup() {
  // Set the maximum speed and acceleration
  stepper.setMaxSpeed(maxSpeed);
  stepper.setAcceleration(acceleration);
  
  // Set the initial direction (clockwise)
  stepper.setSpeed(maxSpeed);
  
  // Move 100 steps in one direction
  stepper.move(stepsPerRevolution * 20);
}

void loop() {
  // Run the stepper motor until it reaches the target position
  if (stepper.distanceToGo() == 0) {
    // The motor has reached the target position
    // You can perform additional actions or set a new target position here
  }
  stepper.run();
}
