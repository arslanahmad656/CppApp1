#pragma once

void p5Ex1();
void p5Ex2();
void squareArray(int* arr, int size);
void cubeArray(int* arr, int size);
void transformArray(int* arr, int size, int (*transformer)(int));
int getSquare(int);
int getCube(int);
int getSqrt(int);
void filterArray(int* arr, int size, bool (*filter)(int));
bool greaterThan100(int);

void pointers5()
{
	//p5Ex1();
	p5Ex2();
}

void sayHello()
{
	cout << "Hello!" << endl;
}

void sayGoodbye()
{
	cout << "Goodbye!" << endl;
}

void p5Ex1()
{
	void (*fPtr)() = sayHello;

	fPtr();

	fPtr = sayGoodbye;
	fPtr();
}

void squareArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		int actualValue = arr[i];
		int transformedValue = actualValue * actualValue;
		arr[i] = transformedValue;
	}
}

void cubeArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		int actualValue = arr[i];
		int transformedValue = actualValue * actualValue * actualValue;
		arr[i] = transformedValue;
	}
}

void p5Ex2()
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	// PROBLEM: We have to repeat the logic in every function that is transforming our array.
	squareArray(arr, 5);
	cubeArray(arr, 5);

	int arr2[5] = { 1, 2, 3, 4, 5 };
	transformArray(arr2, 5, getSquare);
	transformArray(arr2, 5, getSquare);
	transformArray(arr2, 5, getSqrt);
}

void transformArray(int* arr, int size, int (*transformer)(int))
{
	for (int i = 0; i < size; i++)
	{
		int actualValue = arr[i];
		int transformedValue = transformer(actualValue);
		arr[i] = transformedValue;
	}
}

int getSquare(int n)
{
	return n * n;
}

int getCube(int n)
{
	return n * n * n;
}

int getSqrt(int n)
{
	return sqrt(n);
}

void filterArray(int* arr, int size, bool (*filter)(int))
{
	for (int i = 0; i < size; i++)
	{
		int actualValue = arr[i];
		bool isValid = filter(actualValue);
		if (!isValid) 
		{
			arr[i] = -1;	// means that value has been removed from the array
		}
	}
}