#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	Circle c1(1, 10);
	c1.setRadius(20);

	const Circle c2(2, 20);
	//c2.setRadius(30);	// changes the member
	c2.getRadius();	// does not change any member
	c2.print(); // does not change any member

	c1.print();
}