#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include "mat2.hpp"

TEST_CASE("describe_Vec2_Plus","[Vec2]")
{

Vec2 v1{1,2};
Vec2 v3{6,2};
Vec2 v4{-2,2};
Vec2 v6{8.33,-2.2};
Vec2 v7{0,4.2};

v1+=v1;
REQUIRE(v1.x == 2);
REQUIRE(v1.y == 4);

v3+=v4;
REQUIRE(v3.x == 4);
REQUIRE(v3.y == 4);

v6+=v7;
REQUIRE(v6.x == Approx(8.33f));
REQUIRE(v6.y == Approx(2.0f));

v4+=v7;
REQUIRE(v4.x == Approx(-2.0f));
REQUIRE(v4.y == Approx(6.2f));

}
TEST_CASE("describe_Vec2_Minus","[Vec2]")
{

Vec2 v1{1,2};
Vec2 v3{6,2};
Vec2 v4{-2,2};
Vec2 v6{8.33,-2.2};
Vec2 v7{0,4.2};

v1-=v1;
REQUIRE(v1.x == 0);
REQUIRE(v1.y == 0);

v3-=v4;
REQUIRE(v3.x == 8);
REQUIRE(v3.y == 0);

v6-=v7;
REQUIRE(v6.x == Approx(8.33f));
REQUIRE(v6.y == Approx(-6.40f));

v4-=v7;
REQUIRE(v4.x == Approx(-2.0f));
REQUIRE(v4.y == Approx(-2.2f));

}
TEST_CASE("describe_Vec2_Mal","[Vec2]")
{
Vec2 v1{1,2};
Vec2 v4{-2,2};
Vec2 v6{8.33,-2.2};
Vec2 v7{0,4.2};

v1*=3.0;
REQUIRE(v1.x == Approx(3.0f));
REQUIRE(v1.y == Approx(6.0f));

v4*=-1.0;
REQUIRE(v4.x == Approx(2.0f));
REQUIRE(v4.y == Approx(-2.0f));

v6*=0.0;
REQUIRE(v6.x == Approx(0.0f));
REQUIRE(v6.y == Approx(0.0f));

v7*=4.2;
REQUIRE(v7.x == Approx(0.0f));
REQUIRE(v7.y == Approx(17.64f));

}
TEST_CASE("describe_Vec2_Durch","[Vec2]")
{
Vec2 v1{1,2};
Vec2 v4{-2,2};
Vec2 v6{8.33,-2.2};
Vec2 v7{0,4.2};

v1/=3.0;
REQUIRE(v1.x == Approx(0.33333f));
REQUIRE(v1.y == Approx(0.66666f));

v4/=-1.0;
REQUIRE(v4.x == Approx(2.0f));
REQUIRE(v4.y == Approx(-2.0f));

v6/=8.33;
REQUIRE(v6.x == Approx(1.0f));
REQUIRE(v6.y == Approx(-0.26411f));

v7/=4.2;
REQUIRE(v7.x == Approx(0.0f));
REQUIRE(v7.y == Approx(1.0f));

}
//////////////////////////////////////////

TEST_CASE("describe_Vec2_Add","[Vec2]")
{
Vec2 v1{1,2};
Vec2 v2{2,2};
Vec2 v3=v1+v2;
Vec2 v4{0,3};
Vec2 v5=v3+v4;
Vec2 v6{-2,-1};
Vec2 v7=v1+v6;
Vec2 v8{0.5,0.333};
Vec2 v9=v4+v8;

REQUIRE(v3.x==3);
REQUIRE(v3.y==4);

REQUIRE(v5.x==3);
REQUIRE(v5.y==7);

REQUIRE(v7.x==-1);
REQUIRE(v7.y==1);

REQUIRE(v9.x==Approx(0.5f));
REQUIRE(v9.y==Approx(3.333f));
}

TEST_CASE("describe_Vec2_Sub","[Vec2]")
{
Vec2 v1{1,2};
Vec2 v2{2,2};
Vec2 v3=v1-v2;
Vec2 v4{0,3};
Vec2 v5=v3-v4;
Vec2 v6{-2,-1};
Vec2 v7=v1-v6;
Vec2 v8{0.5,0.333};
Vec2 v9=v4-v8;

REQUIRE(v3.x==-1);
REQUIRE(v3.y==0);

REQUIRE(v5.x==-1);
REQUIRE(v5.y==-3);

REQUIRE(v7.x==3);
REQUIRE(v7.y==3);

REQUIRE(v9.x==Approx(-0.5f));
REQUIRE(v9.y==Approx(2.667f));
}

TEST_CASE("describe_Vec2_Mul","[Vec2]")
{
Vec2 v1{1,2};
Vec2 v2=v1*1.0;
Vec2 v3=v1*0.1;
Vec2 v4{0,3};
Vec2 v5=v4*4; 
Vec2 v6{-2,-1};
Vec2 v7=v6*(-2);
Vec2 v8{0.5,0.333};
Vec2 v9=v8*2;

REQUIRE(v2.x==Approx(1.0f));
REQUIRE(v2.y==Approx(2.0f));

REQUIRE(v3.x==Approx(0.10f));
REQUIRE(v3.y==Approx(0.20f));

REQUIRE(v5.x==Approx(0.0f));
REQUIRE(v5.y==Approx(12.0f));

REQUIRE(v7.x==Approx(4.0f));
REQUIRE(v7.y==Approx(2.0f));

REQUIRE(v9.x==Approx(1.0f));
REQUIRE(v9.y==Approx(0.666f));
}

TEST_CASE("describe_Vec2_Div","[Vec2]")
{
Vec2 v1{1,2};
Vec2 v2=v1/1.0;
Vec2 v3=v1/0.1;
Vec2 v4{0,3};
Vec2 v5=v4/4; 
Vec2 v6{-2,-1};
Vec2 v7=v6/(-2);
Vec2 v8{0.5,0.333};
Vec2 v9=v8/2;

REQUIRE(v2.x==Approx(1.0f));
REQUIRE(v2.y==Approx(2.0f));

REQUIRE(v3.x==Approx(10.0f));
REQUIRE(v3.y==Approx(20.0f));

REQUIRE(v5.x==Approx(0.0f));
REQUIRE(v5.y==Approx(0.75f));

REQUIRE(v7.x==Approx(1.0f));
REQUIRE(v7.y==Approx(0.5f));

REQUIRE(v9.x==Approx(0.25f));
REQUIRE(v9.y==Approx(0.1665f));
}

TEST_CASE("describe_Mat2_Durch","[Mat2]")
{
Mat2 m1{1,2,3,4};
Mat2 m2{3,1,8,6};
Mat2 m3{};
Mat2 m4{-3,-4,-1,0};
Mat2 m5{0.5,1.5,1.33,-7.5};

m1*=m2;
REQUIRE(m1.a==19);
REQUIRE(m1.b==13);
REQUIRE(m1.c==41);
REQUIRE(m1.d==27);
m2*=m3;
REQUIRE(m2.a==3);
REQUIRE(m2.b==1);
REQUIRE(m2.c==8);
REQUIRE(m2.d==6);
m4*=m2;
REQUIRE(m4.a==-41);
REQUIRE(m4.b==-27);
REQUIRE(m4.c==-3);
REQUIRE(m4.d==-1);
m2*=m5;
REQUIRE(m2.a==Approx(2.83f));
REQUIRE(m2.b==Approx(-3.0f));
REQUIRE(m2.c==Approx(11.98f));
REQUIRE(m2.d==Approx(-33.0f));

}

TEST_CASE("describe_Mat2_Div","[Mat2]")
{
Mat2 m1{1,2,3,4};
Mat2 m2{3,1,8,6};
Mat2 m3{};
Mat2 m4{-3,-4,-1,0};
Mat2 m5{0.5,1.5,1.33,-7.5};
Mat2 m6=m1*m2;
Mat2 m7=m2*m3;
Mat2 m8=m4*m2;
Mat2 m9=m2*m5;

REQUIRE(m6.a==19);
REQUIRE(m6.b==13);
REQUIRE(m6.c==41);
REQUIRE(m6.d==27);

REQUIRE(m7.a==3);
REQUIRE(m7.b==1);
REQUIRE(m7.c==8);
REQUIRE(m7.d==6);

REQUIRE(m8.a==-41);
REQUIRE(m8.b==-27);
REQUIRE(m8.c==-3);
REQUIRE(m8.d==-1);

REQUIRE(m9.a==Approx(2.83f));
REQUIRE(m9.b==Approx(-3.0f));
REQUIRE(m9.c==Approx(11.98f));
REQUIRE(m9.d==Approx(-33.0f));
}

TEST_CASE("describe_Mat2_MatVek","[Mat2]")
{
Mat2 m1{1,2,3,4};
Mat2 m2{3,1,-8,6};
Mat2 m3{};
Mat2 m4{0.3,-4.1,7.5,0};

Vec2 v1{2,4};
Vec2 v2{-1,1};
Vec2 v3{3.33,5.9};

Vec2 v4,v5,v6,v7;

v4 = v1*m3;
REQUIRE(v4.x==2);
REQUIRE(v4.y==4);

v5 = v1*m1;
REQUIRE(v5.x==14);
REQUIRE(v5.y==20);

v6 = m2*v2;
REQUIRE(v6.x==-2);
REQUIRE(v6.y==14);

v7 = v3*m4;
REQUIRE(v7.x==Approx(45.249f));
REQUIRE(v7.y==Approx(-13.653f));
}
TEST_CASE("describe_Mat2_Det","[Mat2]")
{
Mat2 m1{1,2,3,4};
Mat2 m2{3,1,-8,6};
Mat2 m3{};
Mat2 m4{0.3,-4.1,7.5,0};

/*REQUIRE(m1.det() == -2);
REQUIRE(m2.det() == 51);
REQUIRE(m3.det() == 1);
REQUIRE(m4.det() == -1,23);*/
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
