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
}

Circle::~Circle()
{
    objectCount--;
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
