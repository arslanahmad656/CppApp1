#pragma once

void dTest1()
{
	int* p = new int;	// request to allocate memory for 1 integer
	delete p;	// if not, memory leakage will occur
}

void dTest2()
{
	int* p = new int;
	*p = 10;

	cout << *p << endl;

	delete p;	// after this statement, p will be a dangling pointer
	p = nullptr;	// do this after deleting the memory pointed to by a pointer
}

void dTest3()
{
	cout << "Enter number of elements to allocate: ";
	int n;
	cin >> n;

	int* arr = new int[n]; // request for memory to store n number of integers on the heap
	delete[] arr;	// this is how a contigious block of memory allocated on the heap is released back to the OS
}

int* allocateArray(int size)
{
	int* arr = new int[size];
	return arr;
}

int** allocate2dArray(int rows, int cols)
{
	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	return arr;
}

void dynamicMemory1()
{
	//dTest1();
	//dTest2();
	//dTest3();

	/*int* arr = allocateArray(10);
	delete[] arr;
	arr = nullptr;*/

	int** arr2d = allocate2dArray(3, 2);
	//delete[] arr2d;	// never deallocate an array which might itself contains the elments which can point to memory allocated on the heap. Instead, first delete the lower level allocated memory.
	for (int i = 0; i < 3; i++)
	{
		delete[] arr2d[i];
	}

	delete[] arr2d;
}