#pragma once

#include <cmath>
#include <iomanip>

void simulateDiceRollingWithoutArray(int repetions);
void simulateDiceRollingWithArray(int repetitions);
void testAutoArray();
void testStaticArray();
void testArrayName();
void testPassArray();
void printArray(int arr[], int size);

void testArrays2()
{
	//simulateDiceRollingWithoutArray(10000000);
	//simulateDiceRollingWithArray(100000000);
	/*testAutoArray();
	testAutoArray();
	testStaticArray();
	testStaticArray();
	testStaticArray();
	testStaticArray();*/
	//testArrayName();
	testPassArray();

}

void simulateDiceRollingWithoutArray(int repetions)
{
	srand(time(NULL));

	int face1Frequency = 0;
	int face2Frequency = 0;
	int face3Frequency = 0;
	int face4Frequency = 0;
	int face5Frequency = 0;
	int face6Frequency = 0;

	for (int i = 1; i <= repetions; i++) 
	{
		int face = 1 + rand() % 6;	// random number between 1 and 6 inclusive

		switch (face)
		{
		case 1:
			face1Frequency++;
			break;
		case 2:
			face2Frequency++;
			break;
		case 3:
			face3Frequency++;
			break;
		case 4:
			face4Frequency++;
			break;
		case 5:
			face5Frequency++;
			break;
		case 6:
			face6Frequency++;
			break;
		}
	}

	cout << "FACE     FREQUENCY" << endl;

	cout << "Face 1" << setw(11) << face1Frequency << endl;
	cout << "Face 2" << setw(11) << face2Frequency << endl;
	cout << "Face 3" << setw(11) << face3Frequency << endl;
	cout << "Face 4" << setw(11) << face4Frequency << endl;
	cout << "Face 5" << setw(11) << face5Frequency << endl;
	cout << "Face 6" << setw(11) << face6Frequency << endl;
}

void simulateDiceRollingWithArray(int repetitions)
{
	const int size = 7;
	int frequencies[size] = {};

	for (int i = 1; i <= repetitions; i++)
	{
		int face = 1 + rand() % 6;	// random number between 1 and 6 inclusive
		
		//int previousFrequency = frequencies[face];	// get the existing frequency of the face
		//int updatedFrequency = previousFrequency + 1;	// increment because we have once again received this face
		//frequencies[face] = updatedFrequency;
		frequencies[face]++;	// above three commented lines can be replaced with this single statement
	}

	cout << setw(10) << "FACE" << setw(15) << "FREQUENCY" << setw(13) << "PERCENTAGE" << endl;

	for (int face = 1; face < size; face++)
	{
		int frequency = frequencies[face];
		cout << setw(10) << "Face " << face << setw(15) << frequency << setw(13) << (double)frequency / repetitions * 100 << endl;
	}
}

void testAutoArray()
{
	const int size = 5;
	int arr[size] = { 1, 1, 1, 1, 1 };

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}

	cout << endl;

	for (int i = 0; i < size; i++)
	{
		arr[i]++;
	}
}

void testStaticArray()
{
	const int size = 5;
	static int arr[size] = { 1, 1, 1, 1, 1 };

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}

	cout << endl;

	for (int i = 0; i < size; i++)
	{
		arr[i]++;
	}
}

void testArrayName()
{
	int arr[] = { 1, 2, 3 };

	cout << &arr[0] << endl;
	cout << arr << endl;
	cout << &arr << endl;
}

void changeArray(int arr[], int size)
{
	for (int i = 0; i < size; i++) arr[i]++;
}

void testPassArray()
{
	const int size = 5; 
	int arr[size] = {};

	cout << "Before calling the function, array is: ";
	printArray(arr, size);

	cout << endl << endl;
	changeArray(arr, size);	// arrays are passed by reference.

	cout << "After calling the function, array is: ";
	printArray(arr, size);
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
}