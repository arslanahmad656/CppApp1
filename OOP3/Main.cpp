#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	Circle c1(1, 10);
	auto cPtr1 = new Circle(2, 20);

	cout << cPtr1->getTotalObjects() << endl;	// impression is that an instance method is being invoked on c1.
	cout << Circle::getTotalObjects() << endl;

	delete cPtr1;
}