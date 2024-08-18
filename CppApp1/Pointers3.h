#pragma once

void p3Ex1();
void p3Ex2();
void p3Ex3();
void p3Ex4();

void pointers3()
{
	//p3Ex1();
	//p3Ex2();
	//p3Ex3();
	p3Ex4();
}

void p3Ex1()
{
	char str[10] = "Hello";	// both pointer and the array are the same.

	const char* str2 = "Hello";	// array is created in a different segment but the pointer is created inside the stack.
}

void p3Ex2()
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

void p3Ex3()
{
	char c1 = 'a';
	char c2 = 'b';
	char s1[10] = "Hello";
	const char* s2 = "Hello";

	char* cPtr = &c1;

	const char* arr[4] = {};
	arr[0] = &c1;
	arr[1] = &c2;
	arr[2] = s1;
	arr[3] = s2;

	cout << s2 << endl; // HELLO
	cout << s1 << endl; // HELLO

	cout << cPtr << endl;	// out?

	for (int i = 0; i < 4; i++)
	{
		cout << (arr[i]) << endl;
	}
}

void testArray(int* arr)
{}

void testArray2(int arr[])
{
	cout << sizeof(arr) << endl;
}

void p3Ex4()
{
	char c1 = 'a';
	char* c1Ptr = &c1;

	int i1 = 1;
	int* i1Ptr = &i1;

	cout << sizeof(c1) << endl;	// 1
	cout << sizeof(c1Ptr) << endl; // 1

	cout << sizeof(i1) << endl;	// 4
	cout << sizeof(i1Ptr) << endl;	// 4

	int arr[5] = {};
	int* arrPtr = arr;

	cout << sizeof(arr) << endl	// 4 * 5 = 20
		<< arrPtr << endl;	// 8

	cout << sizeof(arr) / sizeof(int) << endl;

	testArray2(arr);
}