#pragma once

#include <iostream>
#include <cmath>
#include <cstdlib>

unsigned long long getFactorial(unsigned short number)
{
	int count = 1;
	unsigned long long product = 1;
	while (count <= number)
	{
		product = product * count;
		count++;
	}

	return product;
}

void printFactorial2()
{
	cout << "Enter a Number :";
	int input;
	cin >> input;

	int product = getFactorial(input);

	cout << input << "! = " << product << endl;
}

int square(int value)
{
	return pow(value, 2);
}

int getSomeValueSquared(int n)
{
	return pow(n, 2);
}

int getSomeValueSquared2(int n)
{
	return getSomeValueSquared(n);
}

int getSomeValueSquared3(int n)
{
	return getSomeValueSquared2(n);
}

void printSomeValue(int n)
{
	cout << n << endl;
}

void printSomeValue2(int n)
{
	printSomeValue(n);
}

void printSomeValue3(int n)
{
	printSomeValue2(n);
}

void functionsTest()
{
	//double factorialSquared = pow(getFactorial(10), 2);

	/*cout << "Before function call." << endl;
	int squaredValue = square(10);
	cout << "After function call." << endl;*/

	//int squaredValue = getSomeValueSquared3(10);
	printSomeValue3(10);
}