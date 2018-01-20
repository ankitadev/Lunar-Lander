/********************************
 * File: lander.cpp
 * Author: Ankita Dev
 * The methods of the Lander class.
 ********************************/

#include "lander.h"
#include "point.h"
#include "uiDraw.h"

#include <iostream>
using namespace std;

Lander::Lander()
{
  landed = false;
  alive = true;
  fuel = 500;
}

/********************
 * Setters
 ********************/
void Lander::setLanded(bool landed)
{
  this->landed= landed;
}

void Lander::setAlive(bool alive)
{
  this->alive= alive;
}

void Lander::setFuel(int fuel)
{
  this->fuel= fuel;
}

/********************
 * Apply thrust functions
 ********************/
void Lander::applyGravity(float newGravity)
{
      velocity.setDy(velocity.getDy() - newGravity);
}

void Lander::applyThrustLeft()
{
   if(fuel >= 1)
   {
   //velocity.Dx = -0.1;
     velocity.setDx(velocity.getDx() + 0.1);
     fuel -= 1;
   }
}

void Lander::applyThrustRight()
{
   if(fuel >= 1)
   {
   //velocity.Dx = 0.1;
     velocity.setDx(velocity.getDx() - 0.1);
      fuel -= 1;
   }
}

void Lander::applyThrustBottom()
{
   if(fuel >= 3)
   {
     velocity.setDy(velocity.getDy() + 0.3);
      fuel -= 3;
   }
}

/********************
 * advance and draw functions
 ********************/
void Lander::advance()
{
   point.setX(point.getX()+velocity.getDx());
   point.setY(point.getY()+velocity.getDy());
}
void Lander::draw()
{
   drawLander(point);
   
   return;         
}
