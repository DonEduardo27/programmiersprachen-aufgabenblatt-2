#include "mat2.hpp"
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