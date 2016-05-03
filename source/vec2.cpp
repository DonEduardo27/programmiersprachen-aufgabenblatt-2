#include "vec2.hpp"
#include <iostream>

Vec2::Vec2():
x{0},y{0}
{}

Vec2::Vec2(float x_,float y_):
x{x_},
y{y_}{}

Vec2& Vec2::operator+=(Vec2 const& v)
{
	x += v.x;
	y += v.y;
	
	return *this;
}
Vec2& Vec2::operator-=(Vec2 const& v)
{
	x -= v.x;
	y -= v.y;
	
	return *this;
}
Vec2& Vec2::operator*=(float v)
{
	x *= v;
	y *= v;
	
	return *this;
}
Vec2& Vec2::operator/=(float v)
{
	if(v!=0.0f)
	{
		x /= v;
		y /= v;
	}
	else    
	{	
	std::cout<<"ACHTUNG! Irgendwo wurde ein Vektor durch 0 geteilt! Bitte uberprufen Sie nochmal alles!"<<std::endl;
	}	
	return *this;
}
///////////////////////////////////////////////////////////////
Vec2 operator +( Vec2 const & u , Vec2 const & v )
{
	Vec2 w;
	w.x = u.x + v.x;
	w.y = u.y + v.y;
	return w;
}

Vec2 operator -( Vec2 const & u , Vec2 const & v )
{
	Vec2 w;
	w.x = u.x - v.x;
	w.y = u.y - v.y;
	return w;
}

Vec2 operator *( Vec2 const & v , float s )
{
	Vec2 w;
	w.x = v.x * s;
	w.y = v.y * s;
	return w;
}
Vec2 operator /( Vec2 const & v , float s )
{
	Vec2 w;
	if(s!=0.0f)
	{
		w.x = v.x / s;
		w.y = v.y / s;
	}
	else    
	{	
	std::cout<<"ACHTUNG! Irgendwo wurde ein Vektor durch 0 geteilt! Bitte uberprufen Sie nochmal alles!"<<std::endl;
	}

	return w;
}

Vec2 operator *( float s , Vec2 const & v )
{
	Vec2 w;
	w.x = v.x * s;
	w.y = v.y * s;
	return w;
}







