#include "main.h"
using namespace okapi;

std::shared_ptr<OdomChassisController> chassis =
ChassisControllerBuilder()
  .withMotors(9, -10)
  .withGains(
    {0.001, 0, 0.0001}, //distance controller gains
    {0.001, 0, 0.0001}, //turn controller gains
    {0.001, 0, 0.0001} // angle controller gains (helps drive straight)
  )
  .withSensors(
    ADIEncoder{'A', 'B'}, //left encoder in ports A, B
    ADIEncoder{'C', 'D', true}, //right encoder in ports C, D, reversed
    ADIEncoder{'E', 'F'} //horizontal encoder in porst E, F
  )
  //green gearset, tracking wheel diameter (2.75 in), track (7 in), and 360 turns per rev
  .withDimensions(AbstractMotor::gearset::green, {{2.75_in, 7_in, 1_in, 2.75_in}, quadEncoderTPR})
  .withOdometry()
  .buildOdometry();

  // set the state to zero
  chassis->setState({0_in, 0_in, 0_deg});
  // turn 45 degrees and drive approximately 1.4 ft
  chassis->driveToPoint({1_ft, 1_ft});
  // turn approximately 45 degrees to end up at 90 degrees
  chassis->turnToAngle(90_deg);
  // turn approximately -90 degrees to face {5_ft, 0_ft} which is to the north of the robot
  chassis->turnToPoint({5_ft, 0_ft});
