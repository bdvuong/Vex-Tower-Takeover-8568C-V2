#include "main.h"

//helper functions
void setIntake(int intakePower) {
  intakeLeft = intakePower;
  intakeRight = intakePower;
}

//auton functions
void spinIntake(int direction, int voltage) {
  setIntake(direction * voltage);
}

//driver control functions
void setIntakeMotors() {
  // lower is L2, want it to out outtake
  // Upper is L1, want it to intake
  int intakePower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2));
  setIntake(intakePower);
}

void intakeMacro() {
  int buttonPressed = controller.get_digital(pros::E_CONTROLLER_DIGITAL_A);
  if(buttonPressed == 1) {
    spinIntake(-1, 62);
  }
}
