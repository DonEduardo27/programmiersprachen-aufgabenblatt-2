#include "window.hpp"
#include <utility>
#include <cmath>
#include "vec2.hpp"
#include "mat2.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "color.hpp"
#include <vector>

int main(int argc, char* argv[])
{
  Window win{std::make_pair(500,500)};
  auto t0 = win.get_time();

  while (!win.should_close()) {
    if (win.is_key_pressed(GLFW_KEY_ESCAPE)) {
      win.close();
    }

    std::vector<Vec2> vec(4);
    std::vector<color> farb(5);
    std::vector<Circle> kreise(2);
    std::vector<Rectangle> eck(2);
    
    farb[4]={0,0,1};

    vec[0]={0.1,0.2};
    farb[0]={1.0,0.5,0.3};
    eck[0]={vec[0],0.5,0.5,farb[0]};
    eck[0].drawAusgemalt(win);

    vec[1]={0.2,0.4};
    farb[1]={0.0,0.5,1.0};
    eck[1]={vec[1],0.6,0.2,farb[1]};
    eck[1].draw(win);   

    vec[2]={0.8,0.2};
    //farb[2]={1.0,0.5,0.3};
    kreise[0]={0.2 ,vec[2]};
    kreise[0].drawAusgemalt(win);

    vec[3]={0.1,0.8};
    farb[3]={0.1,1.0,1.0};
    kreise[1]={0.15 ,vec[3],farb[3]};
    kreise[1].draw(win);   

    auto m = win.mouse_position();
    Vec2 maus{m.first,m.second};

    for (unsigned int i=0;i<kreise.size();i++)
        {
            if(kreise[i].isInside(maus) )kreise[i].drawAusgemalt(win,farb[4]);
        }
    for (unsigned int i=0;i<eck.size();i++)
        {
            if(eck[i].isInside(maus) )eck[i].drawAusgemalt(win,farb[4]);
        }


    win.update();
  }

  return 0;
}