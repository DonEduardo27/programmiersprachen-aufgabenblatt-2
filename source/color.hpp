#ifndef COLOR_HPP
#define COLOR_HPP

struct color{
color();
color(float r, float g , float b);

	float r;
	float g;
	float b;

color& operator=( color const& c );
};

#endif