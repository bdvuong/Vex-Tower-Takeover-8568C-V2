#include "main.h"

//A PID loop is a method that allows for a robot to minimize the likelyhood that a robot overshoots its target. Will mostly be used in autonomous but may have use in driver control
//http://smithcsrobot.weebly.com/uploads/6/0/9/5/60954939/pid_control_document.pdf

//local variables
float error;
float integral = 0;
float derivative = 0;
float prevError = 0;
const int integralMax = 25;

//the PID function, must be in a while loop
int PIDLoop(double Kp, double Ki, double Kd, double targetUnits, double encoderValue) {

  int voltage;

  //set the error
  error = targetUnits - encoderValue;

  //find the integral
  integral = integral + error;

  if(error == 0)
    integral = 0;

  if(fabs(error) >= integralMax)
    integral = 0;

  derivative = error - prevError;

  prevError = error;

  voltage = (Kp * error) + (Ki * integral) + (Kd * derivative);

  if(voltage > 127)
    voltage = 127;

  if(voltage < -127)
    voltage = -127;

  return voltage;
}
