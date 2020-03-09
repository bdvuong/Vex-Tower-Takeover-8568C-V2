#include "main.h"

//The distance between the tracking wheels and the center of the robot in inches
#define RTRACKING_CENTER 6.0
#define LTRACKING_CENTER 6.0
#define HTRACKING_CENTER 6.0

//structures to make things neater
typedef struct position {
double xPosition;
double yPosition;
double angle;
} position;

typedef struct rectCoord {
double x;
double y;
} rectCoord;

typedef struct polarCoord {
double radius;
double angle;
} polarCoord;

extern position currPosition;

//functions
//conversion functions
polarCoord rectToPolar(double x, double y);
rectCoord polarToRect(double radius, double angle);

void updatePosition();
double getX();
double getY();
double getAngleDegrees();
double getAngleRad();
