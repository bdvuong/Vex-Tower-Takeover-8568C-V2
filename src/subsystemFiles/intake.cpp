#include "main.h"

//helper functions
void setIntake(int intakePower) {
  intakeLeft = intakePower;
  intakeRight = intakePower;
}

//driver control functions
void setIntakeMotors() {
  // lower is L2, want it to out outtake
  // Upper is L1, want it to intake
  int intakePower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2));
  setIntake(intakePower);
}
