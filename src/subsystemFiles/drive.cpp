//source file for drive train
#include "main.h"

//helper functions
void setDrive(int left, int right) {
  driveLeft = left;
  driveRight = right;
}

//auton functions
void translate(int direction, int distance) {

}



//driver control functions
// //TANK CONTROL
// void setDriveMotors() {
//   int leftJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
//   int rightJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
//   if(abs(leftJoystick) < 10)
//     leftJoystick = 0;
//   if(abs(rightJoystick) < 10)
//     rightJoystick = 0;
//   setDrive(leftJoystick, rightJoystick);
// }

//ARCADE CONTROL
void setDriveMotors() {
  int yAxis = (controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y));
  int xAxis = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_X);
  if(abs(yAxis) < 10)
    yAxis = 0;
  if(abs(xAxis) < 10)
    xAxis = 0;
  int leftPower = yAxis + xAxis;
  int rightPower =  yAxis - xAxis;
  setDrive(leftPower, rightPower);
}
