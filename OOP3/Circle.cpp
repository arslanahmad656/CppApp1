#include "Circle.h"
#include <stdlib.h>
#include <iostream>

using namespace std;


const double Circle::pi = 3.14159;
int Circle::objectCount = 0;

Circle::Circle(int id)
    : Circle(id, 0.0)
{
}

Circle::Circle(int id, double radius)
    : id(id)
{
    //id = 10;    // invalid
    if (!setRadius(radius))
    {
        exit(-1);
    }

    objectCount++;

    cout << "A new circle was instantiated. Total circles in memory: " << objectCount << endl;
}

Circle::~Circle()
{
    objectCount--;
    
    cout << "A circle was destroyed. Remaining circles in memory: " << objectCount << endl;
}

double Circle::getRadius() const
{
    return radius;
}

bool Circle::setRadius(double radius)
{
    if (radius < 0)
    {
        return false;
    }

    this->radius = radius;
    return true;
}

double Circle::getArea() const
{
    return 2 * pi * radius;
}

void Circle::print() const
{
    cout << "ID: " << id << ", radius: " << radius << endl;
}

int Circle::getTotalObjects()
{
    return objectCount;
}

void Circle::testStaticMethod()
{
    //cout << this->objectCount << endl;  // not allowed to use 'this' inside the static methods since 'this' is not there in static methods. static methods can be invoked without any object
    cout << pi << endl;

    //cout << id << endl; // cannot access the non-static members
}
