//header file for all globals, stuff that we want global access to
#include "main.h"

//motors
extern pros::Motor driveRight;
extern pros::Motor driveLeft;
extern pros::Motor liftRight;
extern pros::Motor liftLeft;
extern pros::Motor intakeRight;
extern pros::Motor intakeLeft;
extern pros::Motor tiltTable;

//controller
extern pros::Controller controller;

//sensors
extern pros::ADIEncoder trackingH;
extern pros::ADIEncoder trackingLeft;
extern pros::ADIEncoder trackingRight;
extern pros::ADIButton limitSwitch;

//miscellaneous

//Conversion Factors
#define PI 3.14159
#define DEG_CIRCLE 360.0
#define TICKS_DEG_TORQUE 360.0 / 1800.0
#define DEG_TICKS 1800.0 / 360.0
#define WHEEL_DIAM 4.0
#define INCHES_TICKS 1800.0 / (4 * PI)
#define DEG_TO_RAD PI / 180
#define TRACKING_TICK_INCH (2.75 * PI) / 1800
#define TRACKING_INCH_TICK 1800 / (2.75 * PI)
