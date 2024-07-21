#pragma once
#include <iostream>
using namespace std;

int getVolume(int l1);
// double getVolume(int l1);	// error: overloading cannot occur only based on the return type.

double getVolume(int l1, int l2, int l3);	// return types of each overload can be different than the others
float getVolume(int l1, int l2);

void print(int x, double y);	// overloading can be done on the basis of the order of the parameters
void print(double x, int y);

int getSurfaceArea(int l1, int l2, int l3 = 1);	// the l3 parameter is now optional. Optional parameters must be at the end

void testOverloading()
{
	/*cout << getVolume(10) << endl;
	cout << getVolume(10, 20) << endl;
	cout << getVolume(10, 20, 30) << endl;*/
	cout << getSurfaceArea(10, 20, 30) << endl
		<< getSurfaceArea(10, 20) << endl;
}

int getVolume(int l1)
{
	return getVolume(l1, l1, l1);
}

float getVolume(int l1, int l2)
{
	return l1 * l1 * l2;
}

double getVolume(int l1, int l2, int l3)
{
	return l1 * l2 * l3;
}

int getSurfaceArea(int l1, int l2, int l3)
{
	return 2 * (l1 * l2 + l2 * l3 + l3 * l1);
}