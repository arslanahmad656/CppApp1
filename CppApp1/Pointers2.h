#pragma once

void p2Ex1();
void print1d(int* arr, int rows);

void pointers2()
{
	p2Ex1();

	int arr[5] = { 10, 20, 30, 40, 50 };
	print1d(arr, 5);

	int arr2[2][3] = { {10, 20, 30}, {100, 200, 300} };
}

void p2Ex1()
{
	int a = 10;
	int* aPtr = &a;

	cout << (unsigned long long)aPtr << endl;
	cout << (unsigned long long)(aPtr + 1) << endl;
	cout << (unsigned long long)(aPtr + 2) << endl;
	cout << (unsigned long long)(aPtr + 3) << endl;
	cout << (unsigned long long)(aPtr + 4) << endl;

	cout << endl << endl;
	
	double d = 3.14;
	double* dPtr = &d;
	cout << (unsigned long long)dPtr << endl;
	cout << (unsigned long long)(dPtr + 1) << endl;
	cout << (unsigned long long)(dPtr + 2) << endl;
	cout << (unsigned long long)(dPtr + 3) << endl;
	cout << (unsigned long long)(dPtr + 4) << endl;

	cout << endl << endl;

	float f = 2.178;
	float* fPtr = &f;

	// BEWARE! Following is just a normal arithematics
	unsigned long long address = (unsigned long long)fPtr;
	cout << address << endl;
	cout << address + 1 << endl;
	cout << address + 2 << endl;
	cout << address + 3 << endl;
	cout << address + 4 << endl;
}

void print1d(int* arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		//cout << *(arr + i) << "  " << endl;
		cout << arr[i] << "  " << endl;	// exactly same as the above line
	}
}