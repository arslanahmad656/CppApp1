#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;

// following is just a template specification! It's not compiled! compilation happens when specializing a template.
// template type place holders are known as TYPE PARAMETERS
template<typename T>
void swapUsingTemplates(T& x, T& y)
{
	cout << "Type of T: " << typeid(x).name() << endl;
	T temp = x;
	x = y;
	y = temp;
}

void templateTest()
{
	int x = 10, y = 20;

	cout << x << " " << y << endl;

	swapUsingTemplates(x, y);

	cout << x << " " << y << endl;

	float a = 1.5, b = 3.25;
	cout << a << " " << b << endl;
	swapUsingTemplates(a, b);
	cout << a << " " << b << endl;
}

template<class T1, class T2>
void printTypeNames(T1 x, T2 y)
{
	// sdfdfdsfdsfds // since this is only a type specification, there won't be a compilation error unless there is some specialization of this type.
	cout << "Type of x: " << typeid(x).name() << endl;
	cout << "Type of y: " << typeid(y).name() << endl;
}