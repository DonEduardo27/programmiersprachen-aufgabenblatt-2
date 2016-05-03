#include "mat2.hpp"
#include "vec2.hpp"
#include <iostream>

Mat2::Mat2():
a{1},
b{0},
c{0},
d{1}{}

Mat2::Mat2(float a_,float b_,float c_,float d_):
a{a_},
b{b_},
c{c_},
d{d_}{}

Mat2& Mat2::operator*=(Mat2 const& v)
{
	float atemp,btemp,ctemp,dtemp;

	atemp = a*v.a + b*v.c;
	btemp = a*v.b + b*v.d;
	ctemp = c*v.a + d*v.c;
	dtemp = c*v.b + d*v.d;

	a=atemp,b=btemp,c=ctemp,d=dtemp;
	
	return *this;
}
Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 )
{
	Mat2 r;
	r.a = m1.a*m2.a + m1.b*m2.c;
	r.b = m1.a*m2.b + m1.b*m2.d;
	r.c = m1.c*m2.a + m1.d*m2.c;
	r.d = m1.c*m2.b + m1.d*m2.d;

	return r;
}
Vec2 operator*( Mat2 const & m , Vec2 const & v )
{
	Vec2 r;
	r.x = m.a * v.x + m.b * v.y;
	r.y = m.c * v.x + m.d * v.y;
	return r;
}

Vec2 operator*( Vec2 const & v , Mat2 const & m )
{
	Vec2 r;
	r.x = m.a * v.x + m.c * v.y;
	r.y = m.b * v.x + m.d * v.y;
	return r;
}

float det ()
{
	return 0;//a*d-c*b;
}
/*Mat2 inverse ( Mat2 const & m );
Mat2 transpose ( Mat2 const & m );
Mat2 mak e_ ro ta ti on _m at 2 ( float phi );*/




