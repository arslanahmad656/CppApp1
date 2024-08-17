#pragma once

void p3Ex1();
void p4Ex2();

void pointers3()
{
	//p3Ex1();
	p4Ex2();
}

void p3Ex1()
{
	char str[10] = "Hello";	// both pointer and the array are the same.

	const char* str2 = "Hello";	// array is created in a different segment but the pointer is created inside the stack.
}

void p4Ex2()
{
	int arr1[1] = { 1 };	// int*
	int arr2[2] = { 2, 3 };	// int*
	int arr3[3] = { 4, 5, 6 }; // int*

	int* arr4[3] = { arr1, arr2, arr3 };

	const char* strings[3] = { "One", "Two", "Three" };

	for (int i = 0; i < 3; i++) {
		cout << strings[i] << endl;
	}
}