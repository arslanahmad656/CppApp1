#pragma once
#include "pointers5.h"

template<typename TArrayElement>
TArrayElement* transformGenericArray
(
	TArrayElement* inputArray,
	int size,
	TArrayElement(*transformer)(TArrayElement)
)
{
	TArrayElement* transformedArray = new TArrayElement[size];	// Allocate an array on the HEAP!

	for (int i = 0; i < size; i++)
	{
		TArrayElement originalElement = inputArray[i];
		TArrayElement transformedElement = transformer(originalElement);

		transformedArray[i] = transformedElement;
	}

	return transformedArray;
}

void testGenericTransformer()
{
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5 };

	int* transformedArray = transformGenericArray(arr, size, getSquare);

	// print or do whatever
	delete[] transformedArray;
	transformedArray = nullptr;
}

void dynamicMemory2()
{

}