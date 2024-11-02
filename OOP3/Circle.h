#pragma once

class Circle
{
private:
	double radius;	// data member (non-static data member). Each object has its own copy of radius. To be initialized by the ctor
	const int id;	// data member (but cannot be changed). Can only be initialized using the member initializer list.
	static const double pi;	// shared member (static member). Only one copy exists in the memory separate to the objects. Must not be initialized by the constructor.
	static int objectCount;
public:
	Circle(int id);
	Circle(int id, double radius);
	~Circle();
	double getRadius() const;
	bool setRadius(double radius);
	double getArea() const;
	void print() const;
};