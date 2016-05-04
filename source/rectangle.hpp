#include "vec2.hpp"
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
public:

Rectangle();
Rectangle(Vec2 v);
Rectangle(Vec2 v, float width, float height);
Vec2 v;
float width;
float height;
			
void setheight(float l);
void setwidth(float w);
float getheight();
float getwidth();
float perimeter();
float area();

};
#endif