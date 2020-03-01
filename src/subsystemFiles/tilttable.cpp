#include "main.h"
//local variables
int tiltEncoder = tiltTable.get_position();

//helper functions
void setTilt(int tiltPower) {
  tiltTable = tiltPower;
}

//driver control functions
void setTiltMotor() {
  int joystickInt = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);
  if(abs(joystickInt) < 10)
    joystickInt = 0;
  int tiltPower = joystickInt;
  setTilt(tiltPower);
}
