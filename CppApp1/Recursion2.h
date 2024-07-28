#pragma once

int factorial(int n);
int sum(int n);
int nthFabWithLoop(int n);	// find nth number in fabonacci series (using a loop) (n must be a positive number)
int nthFabWithRecursion(int n);	// find nth number in fabonacci series (using recursion) (n must be a positive number)

void testRecursion2()
{
	/*int f = factorial(5);
	cout << endl << endl << f << endl;*/

	//cout << "Sum upto 5: " << sum(5) << endl;

	//cout << "10th fab number: " << nthFabWithLoop(8) << endl;
	cout << "10th fab number: " << nthFabWithRecursion(8) << endl;
}

void addTabs(int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << "\t";
	}
}

int factorial(int n)
{
	static int tabCount = 0;
	cout << endl << endl;

	addTabs(tabCount);
	cout << "We have to find " << n << "!" << endl;

	if (n <= 1)
	{
		addTabs(tabCount);
		cout << "Since n = " << n << ", we have defined this as a base case. So returning 1." << endl;
		return 1;
	}

	addTabs(tabCount);
	cout << "We don't know " << n << "!. So we need to calculate " << n << ".(" << n << " - 1)!" << endl;
	tabCount++;
	int f = n * factorial(n - 1);
	cout << endl << endl;
	addTabs(--tabCount);
	cout << n << ".(" << n << " - 1)! = " << f << endl;

	return f;
}

int sum(int n)
{
	// find the sum from 1 up to n. i.e., 1 + 2 + 3 + 4 + ... + n

	if (n == 1)
	{
		return 1;
	}

	return n + sum(n - 1);
}

int nthFabWithLoop(int n)
{
	if (n == 1)
	{
		return 0;
	}

	if (n == 2)
	{
		return 1;
	}

	int nMinus2Number = 0;
	int nMinus1Number = 1;
	int currentNumber;	// this will store the nth fabonacci number 

	for (int i = 3; i <= n; i++)
	{
		currentNumber = nMinus2Number + nMinus1Number;	// the sum of previous two numbers in the series.
		nMinus2Number = nMinus1Number;
		nMinus1Number = currentNumber;
	}

	// after the loop finishes, we know that currentNumber variable stores the nth fab number. so return it.
	return currentNumber;
}

int nthFabWithRecursion(int n)
{
	if (n == 1)
	{
		return 0;
	}

	if (n == 2)
	{
		return 1;
	}

	return nthFabWithRecursion(n - 1) + nthFabWithRecursion(n - 2);
}