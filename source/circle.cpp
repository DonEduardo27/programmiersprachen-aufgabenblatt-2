#include "circle.hpp"
#include "vec2.hpp"
#include <iostream>

Circle::Circle():
rad{100},
v{100,100}
{}

Circle::Circle(float rad_, Vec2 v_):
rad{rad_},
v{v_}
{}


Circle::Circle(Vec2 v_):
rad{100},
v{v_}
{}

Circle::Circle(float rad_, Vec2 v_,color farb_):
rad{rad_},
v{v_},
farb{farb_}
{}


void Circle::setradius(double r)
{
	rad=r;
}      
         //Gets Radius
double Circle::getradius()
{
	return rad;
}          
             //Calculate the are
double Circle::area()
{
	return 3.141592*rad*rad;
}      
             //Calculate the circumferenc
double Circle::circum()
{
	return 3.141592*rad*2;
}
             //returns the diameter
double Circle::diameter() 
{
	return rad*2;
}
