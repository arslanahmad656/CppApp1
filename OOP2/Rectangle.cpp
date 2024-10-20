#include <iostream>
#include "Rectangle.h"
#include <cstdlib>

using namespace std;

//Rectangle::Rectangle()
//{
//	setLength(0);
//	setWidth(0);
//}
//
//Rectangle::Rectangle(double dimension)
//{
//	setLength(dimension);
//	setWidth(dimension);
//}

Rectangle::Rectangle()
	: Rectangle(0, 0)	// constructor delegation
{
	//Rectangle(0, 0);	// constructor cannot be called like normal functions can be called
	// constructors can only be invoked by other constructors of the same class
}

Rectangle::Rectangle(double dimension)
	: Rectangle(dimension, dimension)
{
	// empty
}

Rectangle::Rectangle(double l, double w)
{
	cout << "Creating rectangle with dimensions " << l << ", " << w << endl;
	setLength(l);
	setWidth(w);
}

Rectangle::~Rectangle()
{
	cout << "Destroying the rectangle with dimensions " << length << ", " << width << endl;
}

void Rectangle::setLength(double length)
{
	if (length < 0)
	{
		abort();
	}

	(*this).length = length;
	//this->length = length;	// short cut for the above mentioned syntax
}

void Rectangle::setWidth(double w)
{
	if (w < 0)
	{
		abort();
	}

	width = w;
}

double Rectangle::getLength()
{
	return length;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getArea()
{
	return length * width;
}