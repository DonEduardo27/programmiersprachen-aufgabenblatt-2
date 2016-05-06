#include "rectangle.hpp"
#include "vec2.hpp"
#include "window.hpp"
#include <iostream>

Rectangle::Rectangle():
v{100,100},width{100},height{100}{}

Rectangle::Rectangle(Vec2 v_):
v{v_},width{100},height{100},farb{0,0,0}{}

Rectangle::Rectangle(Vec2 v_, float w, float h):
v{v_},width{w},height{h},farb{0,0,0}{}
Rectangle::Rectangle(Vec2 v_, float w, float h, color farb_):
v{v_},width{w},height{h},farb{farb_}{}

void Rectangle::setheight(float l)
{
	height = l;
}

void Rectangle::setwidth(float w)
{
	width = w;
}
bool Rectangle::isInside(Vec2 w)
{
  //std::cout<<"Ob ihr wirklich richtig steht, seht ihr, wenn das Licht angeht:"<<std::endl;
  if(w.x>=v.x and w.y>=v.y and w.x<=v.x+width and w.y<=v.y+height)return true;
  else return false;  
}

void Rectangle::draw(Window& win)
{
	win.draw_line(v.x, v.y,
                  width + v.x, v.y, 
                  farb.r,farb.g,farb.b);

    win.draw_line(width+v.x, v.y,
                  width+v.x, height+v.y, 
                  farb.r,farb.g,farb.b);

    win.draw_line(width+v.x, height+v.y,
                  v.x, height+v.y, 
                  farb.r,farb.g,farb.b);

    win.draw_line(v.x, height+v.y,
                  v.x, v.y, 
                  farb.r,farb.g,farb.b);
}
void Rectangle::draw(Window& win, color c)
{
  win.draw_line(v.x, v.y,
                  width + v.x, v.y, 
                  c.r,c.g,c.b);

    win.draw_line(width+v.x, v.y,
                  width+v.x, height+v.y, 
                  c.r,c.g,c.b);

    win.draw_line(width+v.x, height+v.y,
                  v.x, height+v.y, 
                  c.r,c.g,c.b);

    win.draw_line(v.x, height+v.y,
                  v.x, v.y, 
                  c.r,c.g,c.b);
}
void Rectangle::drawAusgemalt(Window& win)
{
for(float i=v.y;i<v.y+height;i+=0.001)
  win.draw_line(v.x, i,
                  width + v.x, i, 
                  farb.r,farb.g,farb.b);

}
void Rectangle::drawAusgemalt(Window& win,color c)
{
for(float i=v.y;i<v.y+height;i+=0.001)
  win.draw_line(v.x, i,
                  width + v.x, i, 
                  c.r,c.g,c.b);

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