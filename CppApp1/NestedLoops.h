#pragma once

#include <iostream>
using namespace std;

static void printNumberLines()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cout << j;
		}

		cout << endl;
	}
}

static void printNumberTriangleAscending()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}

		cout << endl;
	}
}

static void printNumberTriangeDescendeing()
{
	for (int i = 5; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << j;
		}

		cout << endl;
	}
}

static void printNumberTriangeMirror()
{
	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << endl;
	}
}

static void printFirstNPrimeNumbers()
{
	cout << "Enter a number: ";
	int count;
	cin >> count;

	int numberToCheck = 3;
	int totalPrimeNumbersFound = 0;
	while (totalPrimeNumbersFound < count)
	{
		bool factorFound = false;

		for (int factorToTest = 2; !factorFound && factorToTest <= sqrt(numberToCheck); factorToTest++)
		{
			if (numberToCheck % factorToTest == 0)
			{
				factorFound = true;
			}
		}

		if (!factorFound)
		{
			cout << numberToCheck << endl;
			totalPrimeNumbersFound++;
		}

		numberToCheck++;
	}
}

static void printFirstNPrimeNumbersWithBreak()
{
	cout << "Enter a number: ";
	int count;
	cin >> count;

	int numberToCheck = 3;
	int totalPrimeNumbersFound = 0;
	while (totalPrimeNumbersFound < count)
	{
		bool factorFound = false;

		for (int factorToTest = 2; factorToTest <= sqrt(numberToCheck); factorToTest++)
		{
			if (numberToCheck % factorToTest == 0)
			{
				factorFound = true;
				break;
			}
		}

		if (!factorFound)
		{
			cout << numberToCheck << endl;
			totalPrimeNumbersFound++;
		}

		if (totalPrimeNumbersFound == 10)
		{
			break;
		}

		numberToCheck++;
	}
}

static void breakTest()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i == 5) break;
	}

	cout << i << endl;
}

static void continueTest()
{
	for (int i = 1; i < 10; i++)
	{
		if (i == 5)
		{
			continue;
		}

		cout << i << " ";
	}
}

static void printFactorial()
{
	cout << "Enter a Number :";
	int input;
	cin >> input;

	int count = 1;
	int product = 1;
	while (count <= input)
	{
		product = product * count;
		count++;
	}

	cout << input << "! = " << product << endl;
}

static void testNestedLoops()
{
	//printNumberLines();
	//printNumberTriangleAscending();
	//printNumberTriangeDescendeing();
	//printNumberTriangeMirror();
	//printFirstNPrimeNumbers();
	//printFirstNPrimeNumbersWithBreak();
	//breakTest();
	//continueTest();
	printFactorial();
}