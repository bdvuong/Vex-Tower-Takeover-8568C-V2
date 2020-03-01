#include "main.h"

//motors
pros::Motor driveRight(10, pros::E_MOTOR_GEARSET_36, true, pros::E_MOTOR_ENCODER_COUNTS); //torque motors
pros::Motor driveLeft(9, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_COUNTS); //torque motors
pros::Motor liftRight(1, pros::E_MOTOR_GEARSET_36, true, pros::E_MOTOR_ENCODER_COUNTS); //torque motors
pros::Motor liftLeft(2, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_COUNTS); //torque motors
pros::Motor intakeRight(3, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS); //standard gear ratio
pros::Motor intakeLeft(4, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS); //standard gear ratio
pros::Motor tiltTable(8, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_COUNTS); //torque motors

//controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);

//sensors
pros::ADIEncoder trackingH('A', 'B'); //horizontal tracking wheel
pros::ADIEncoder trackingRight('C', 'D'); //right tracking wheel
pros::ADIEncoder trackingLeft('G', 'H'); //left tracking wheel
pros::ADIButton limitSwitch('F'); //switch for the DR4B, double reverse 4 bar
