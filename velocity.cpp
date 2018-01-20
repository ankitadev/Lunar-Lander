/********************************
 * File: velocity.cpp
 * Author: Ankita Dev
 *
 * The methods of the Velocity class.
 ********************************/
#include "velocity.h"
#include <iostream>
using namespace std;

/********************
 * Constructors
 ********************/
Velocity::Velocity()
{
  dx = 0;
  dy = 0;
//  accelerationX = 0;
//  accelerationY = 0;
//  countX = 0;
//  countY = 0;
}

Velocity::Velocity(float dx, float dy)
{
  this->dx = dx;
  this->dy = dy;
//  accelerationX = 0;
//  accelerationY = 0;
//  countX = 0;
//  countY = 0;
}

/********************
 * Setters
 ********************/
void Velocity::setDx(float dx)
{
   this->dx = dx;
}

void Velocity::setDy(float dy)
{
   this->dy = dy;
}
