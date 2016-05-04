#include "vec2.hpp"
#include "color.hpp"
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
public:

Rectangle();
Rectangle(Vec2 v);
Rectangle(Vec2 v, float width, float height);
Rectangle(Vec2 v, float width, float height, color farb);
Vec2 v;
float width;
float height;
			
color farb;
void setheight(float l);
void setwidth(float w);
float getheight();
float getwidth();
float perimeter();
float area();

};
#endif