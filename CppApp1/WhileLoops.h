#pragma once
#include <iostream>
using namespace std;

static void Example1()
{
	int i = 1;

	while (i <= 10)
	{
		cout << i;
		i++;
	}

	cout << "\nLoop end\n";
}

static void Example1WithFor()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << i; 
	}
}

static void PrintAlphabets()
{
	char c = 'A';
	while (c <= 'Z')
	{
		cout << c;
		c++;
	}

	cout << "\nLoop end\n";
}

static void PrintAlphabetsWithFor()
{
	for (char c = 'A'; c <= 'Z'; c++)
	{
		cout << c;
	}
}

static void PrintAlphabetsReverse()
{
	char c = 'Z';
	while (c >= 'A')
	{
		cout << c;
		c--;
	}

	cout << "\nLoop end\n";
}

static void PrintEvenNumbers()
{
	int i = 0;
	while (i <= 100)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}

		i++;
	}

	cout << "\nLoop End\n";
}

static void PrintEvenNumbersWithFor()
{
	for (int i = 0; i <= 100; i++)
		if (i % 2 == 0) cout << i << " ";
}

static void Print100OddNumbers()
{
	int number = 1;
	int counter = 1;

	while (counter <= 100)
	{
		if (number % 2)
		{
			cout << number << "  ";
			counter++;
		}

		number++;
	}

	cout << "\nLoop End\n";
}

static void Print100OddNumbersWithFor()
{
	for (int number = 1, counter = 1; counter <= 100; number++)
	{
		if (number % 2 != 0)
		{
			cout << number << "  ";
			counter++;
		}
	}
}

static void inputValidationExample()
{
	// Input an integer from user between 10 to 20 (10 included, 20 excluded)
	int input;

	cout << "Enter an integer between 10 (included) to 20 (excluded): ";
	cin >> input;

	while (!(input >= 10 && input < 20))
	{
		// entering this loop means that the user provided an invalid value.
		// hence show the error, and take the input again

		cout << "You have entered an invalid value." << endl;;

		cout << "Enter an integer between 10 (included) to 20 (excluded): ";
		cin >> input;
	}

	// Exiting the loop means the input is valid.

	cout << "You have entered the valid input." << endl;
}

static void sentinalSumExample()
{
	int sum = 0;
	int input;

	cout << "Enter the value to add (or any negative number to end): ";
	cin >> input;

	int inputCount = 0;
	while (input >= 0)	// continue adding until the user enters a negative number
	{
		inputCount++;
		sum += input;	// sum = sum + input;

		cout << "You have entered " << inputCount << " inputs and the running sum is " << sum << endl;
		cout << "Enter next value to add (or any negative number to end): ";
		cin >> input;
	}

	// exiting the loop means that user wants to end (he has entered a negative number)
	cout << "Total inputs: " << inputCount << endl << "Final Sum: " << sum << endl;
}

static void isPrime()
{
	// check the given number is prime.

	int number;
	cout << "Enter a number to check if it is prime: " << endl;
	cin >> number;
	int factor = -1;

	for (int i = 2; factor == -1 && i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			factor = i;
		}
	}

	if (factor != -1)
	{
		cout << number << " is not a prime number because it is divisible by " << factor;
	}
	else
	{
		cout << number << "is a prime number.";
	}

	cout << endl;
}