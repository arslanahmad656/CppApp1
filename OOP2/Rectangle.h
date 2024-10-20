#pragma once

class Rectangle
{
private:
	double length;
	double width;
public:
	Rectangle();	// default constructor
	Rectangle(double dimension);	// constructor
	Rectangle(double l, double w);	// constructor
	~Rectangle();	// destructor
	void setLength(double length);
	void setWidth(double w);
	double getLength();
	double getWidth();
	double getArea();
};