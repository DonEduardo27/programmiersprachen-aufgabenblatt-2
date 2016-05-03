#include "vec2.hpp"
#ifndef MAT2_HPP
#define MAT2_HPP

class Mat2
{
public:
Mat2();
Mat2(float a, float b, float c, float d);

float det () const ;

float a;
float b;
float c;
float d;

Mat2 & operator *=( Mat2 const & m );
// ...
};
Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 );

Vec2 operator*( Mat2 const & m , Vec2 const & v );
Vec2 operator*( Vec2 const & v , Mat2 const & m );

#endif