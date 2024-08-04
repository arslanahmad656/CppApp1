#pragma once	

#include<limits>

using namespace std;

template <typename T>
T findMin(const T arr[], int size)
{
	int min = arr[0];

	for (int i = 1; i < size; i++) {
		int currentValue = arr[i];
		if (currentValue < min) {
			min = currentValue;
		}
	}

	return min;
}

void bubbleSort(int arr[], int size);

void testArrays3()
{
	//int arr[] = { 10, 20, 5, 13, 2 };
	/*int min = findMin(arr, 5);
	cout << "Min: " << min << endl;*/

	int arr2[] = { 1, 2, 3, 5, 4 };

	bubbleSort(arr2, 5);

	//printArray(arr, 5);
}

void bubbleSort(int arr[], int size)
{
	cout << "Before sorting, array is: ";
	printArray(arr, size);

	for (int i = 0; i < size - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				//swapped = true;
			}
		}

		cout << endl << endl;
		cout << "When i = " << i << ", array is: ";
		printArray(arr, size);
		cout << endl;

		if (!swapped)
		{
			cout << "No more passes needed since the array is already sorted." << endl;

			return;
		}
	}

	cout << endl;
}