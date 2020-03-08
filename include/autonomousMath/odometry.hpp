#include "main.h"

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

//conversion functions
polarCoord rectToPolar(double x, double y);
rectCoord polarToRect(double radius, double angle);

void updatePosition();
double getX();
double getY();
double getAngleDegrees();
double getAngleRad();
