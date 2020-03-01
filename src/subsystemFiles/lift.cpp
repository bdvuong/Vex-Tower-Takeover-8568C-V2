#include "main.h"

//helper functions
void setLift(int liftPower) {
  liftLeft = liftPower;
  liftRight = liftPower;
}

//driver control functions
void setLiftMotors() {
    // Upper is R1, want lift to go up when pressing
    // lower is R2, want lift to go down when pressing
    int liftPower = 75 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1) - 75 * controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2));
    setLift(liftPower);
}
