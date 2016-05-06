#include "circle.hpp"
#include "vec2.hpp"
#include "window.hpp"
#include <math.h>
#include <iostream>

Circle::Circle():
rad{100},
v{100,100},
farb{}{}

Circle::Circle(float rad_, Vec2 v_):
rad{rad_},
v{v_},
farb{}{}

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
bool Circle::isInside(Vec2 w)
{
	if(sqrt( (w.x-v.x)*(w.x-v.x) + (w.y-v.y)*(w.y-v.y)  )<rad )return true;
	else return false;
}
void Circle::draw(Window& win) 
{

	for(float i=0.0;i<2*M_PI;i+=0.005)
	{
		win.draw_point(v.x+rad*cos(i), v.y+rad*sin(i)
			, farb.r, farb.g, farb.b);
	}

}
void Circle::draw(Window& win, color c) 
{

	for(float i=0.0;i<2*M_PI;i+=0.005)
	{
		win.draw_point(v.x+rad*cos(i), v.y+rad*sin(i)
			, c.r, c.g, c.b);
	}

}

void Circle::drawAusgemalt(Window& win) 
{
	for(float y=-rad;y<rad;y+=0.005)
	{
		for(float x=-rad;x<rad;x+=0.005)
		{
			if(sqrt(x*x+y*y)<rad )win.draw_point(x+v.x, y+v.y
				, farb.r, farb.g, farb.b);
		}
	}
	for(float i=0.0;i<2*M_PI;i+=0.005)
	{
		win.draw_point(v.x+rad*cos(i), v.y+rad*sin(i)
			, farb.r, farb.g, farb.b);
	}	
}

void Circle::drawAusgemalt(Window& win, color c) 
{
	for(float y=-rad;y<rad;y+=0.005)
	{
		for(float x=-rad;x<rad;x+=0.005)
		{
			if(sqrt(x*x+y*y)<rad )win.draw_point(x+v.x, y+v.y
				, c.r, c.g, c.b);
		}
	}
	for(float i=0.0;i<2*M_PI;i+=0.005)
	{
		win.draw_point(v.x+rad*cos(i), v.y+rad*sin(i)
			, c.r, c.g, c.b);
	}	
}