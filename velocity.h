/********************************
 * File: velocity.cpp
 * Author: Ankita Dev
 *
 * Defines the velocity class
 ********************************/

class Velocity
{
  private:
   float dx;
   float dy;

  public:
//   float countX;
//   float countY;
//   float accelerationX;
//   float accelerationY;
   /********************
    * Constructors
    ********************/
   Velocity();
   Velocity(float dx, float dy);

   /********************
    * Getters
    ********************/
   float getDx(){return dx;}
   float getDy(){return dy;}

   /********************
    * Setters
    ********************/
   void setDx(float dx);
   void setDy(float dy);
};
