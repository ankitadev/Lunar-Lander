/***********************************************************************
 * Header File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Ankita Dev
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds of the frame.
 ************************************************************************/
#ifndef LANDER_H
#define LANDER_H

#include <iostream>

#include "point.h"
#include "velocity.h"

class Lander
{
  private:
   Point point;
   Velocity velocity;
   bool landed;
   bool alive;
   int fuel;
   float gravity;
   
  public:
   /********************
    * Constructors
    ********************/
   Lander();

   /********************
    * Getters
    ********************/
   Point getPoint()const {return point;}
   Velocity getVelocity() const {return velocity;}
   int getFuel() {return fuel;};

   bool isAlive(){return alive;};
   bool isLanded(){return landed;};
   bool canThrust(){return gravity;};

   /********************
    * Setters
    ********************/
   void setLanded(bool landed);
   void setAlive(bool alive);
   void setFuel(int fuel);

   void applyGravity(float gravity);
   void applyThrustLeft();
   void applyThrustRight();
   void applyThrustBottom();

   void advance();
   void draw();

};
#endif
