#include "window.hpp"
#include <utility>
#include <cmath>
#include "vec2.hpp"
#include "mat2.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "color.hpp"
#include <vector>
#include <iostream>

int main(int argc, char* argv[])
{
  Window win{std::make_pair(500,500)};
  auto t0 = win.get_time();

  while (!win.should_close()) {
    if (win.is_key_pressed(GLFW_KEY_ESCAPE)) {
      win.close();
    }

	auto t = win.get_time();
  std::cout<<t<<std::endl;
  float rumstressen1 = sin(t+1);
  float rumstressen2 = sin(t*2);
  float rumstressen3 = sin(t*3);

    Vec2 mitte={0.5,0.5};
    color cRahmen={rumstressen1,rumstressen2,rumstressen3};
    Circle rahmen ={0.45 ,mitte,cRahmen};
    rahmen.drawAusgemalt(win);   

    std::vector<Rectangle> zahlen(12);

    int i=0;
    float winkel=0;
    while(i<12)
    {
    Vec2 pos{0.475+sin(winkel)*0.45,0.475+cos(winkel)*0.45};
    zahlen[i]={pos,0.05,0.05};
    winkel+=M_PI/6;
    i++;
    }

    for(int i=0;i<12;i++)zahlen[i].drawAusgemalt(win);
    winkel=M_PI*2/60;
    int quantisieren=t;
    float sek=quantisieren;
    float min=quantisieren/60;
    float std=quantisieren/3600;
    win.draw_line(0.5,0.5,0.5+sin(winkel*sek)*0.5,0.5+cos(winkel*sek)*0.5,rumstressen2,rumstressen3,rumstressen1 );
    win.draw_line(0.5,0.5,0.5+sin(winkel*min)*0.3,0.5+cos(winkel*min)*0.3,rumstressen3,rumstressen2,rumstressen1 );
    win.draw_line(0.5,0.5,0.5+sin(winkel*std)*0.2,0.5+cos(winkel*std)*0.2,rumstressen2,rumstressen1,rumstressen3 );


    win.update();
  }

  return 0;
}