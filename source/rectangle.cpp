#include "rectangle.hpp"
#include "vec2.hpp"
#include <iostream>

Rectangle::Rectangle():
v{100,100},width{100},height{100}{}

Rectangle::Rectangle(Vec2 v_):
v{v_},width{100},height{100}{}

Rectangle::Rectangle(Vec2 v_, float w, float h):
v{v_},width{w},height{h}{}

void Rectangle::setheight(float l)
{
	height = l;
}

void Rectangle::setwidth(float w)
{
	width = w;
}
float Rectangle::getheight()
{
	return height;
}

float Rectangle::getwidth()
{
	return width;
}

float Rectangle::perimeter()
{
	return 2*(width+height);
}
float Rectangle::area()
{
	return width*height;
}