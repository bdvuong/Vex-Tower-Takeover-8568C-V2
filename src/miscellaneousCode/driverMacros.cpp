#include "main.h"

//function to assist with stacking cubes
void easyStack() {
  int buttonPressed = controller.get_digital(pros::E_CONTROLLER_DIGITAL_A);
  if(buttonPressed == 1) {
    setIntake(-62);
    setDrive(-62, -62);
  }
}
