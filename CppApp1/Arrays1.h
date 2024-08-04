#pragma once
#include <cmath>

void declaration()
{
	int arr[2] = { 1, 2 };	// first two elements are set to 1 and 2. The rest are intialized to the default value of int (0)
	
	//int arr2[];	// error: providing size when not specifying the initializer is an error
	//int arr[] = {};	// error: array must have non-zero size
	//int arr = {};	// error: only arrays can have the initializer list. (not simple types)
	
	//int arr[5];
	//arr = {};	// error. Initializer list can only be specified at declaration time.

	//cout << arr[5] << endl;
}

void initializing()
{
	const int size = 5;
	int arr[size] = {};

	for (int i = 0; i < size; i++) 
	{
		cout << "Enter the value of element# " << i + 1 << ": ";
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
}

void constantValuedArray()
{
	const int size = 5;
	//const int arr[size];	// error! cont int arr[size] means that we are creating an array which will store the constant values. so intializer is required.
	
	const int arr[size] = { 1, 2, 3, 4, 5 };	// this is readonly array! values can be read but cannot be changed

	//arr[0] = 10;	// error because arr[0] is a constant value which cannot be changed
}

void simulateRandom()
{
	srand(time(NULL));

	const int size = 5;
	int arr[size] = {};
	for (int i = 0; i < size; i++) 
	{
		arr[i] = rand();
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	} 

	cout << endl;
}

void testArrays1()
{
	//declaration();
	//initializing();
	simulateRandom();
}