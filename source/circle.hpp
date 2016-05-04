#include "vec2.hpp"
#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle 
{
public:
Circle();
Circle(Vec2 v);
Circle(float rad, Vec2 v);

float rad;
Vec2 v;    
             //Sets Radius
    void setradius(double r);      
             //Gets Radius
    double getradius();            
             //Calculate the area
    double area();           
             //Calculate the circumference
    double circum();
             //returns the diameter
    double diameter();  
};

#endif






/*Entwerfen Sie die Klassen Circle und Rectangle. Überlegen Sie, welche Eigen-
schaften einen Kreis bzw. ein achsenparalleles Rechteck auszeichnen und statten
Sie die Klassen mit geeigneten Attributen, Konstruktoren sowie get-Methoden
aus. Implementieren Sie passende Tests in der Datei source/tests.cpp. Com-
miten Sie ihre Änderungen.
Hinweis: Beachten Sie die Hinweise zur Parameterübergabe per const& und in-
itialisieren Sie immer alle Attribute in der Memberinitialisierungsliste.*/