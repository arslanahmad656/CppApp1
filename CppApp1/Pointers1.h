#pragma once

void p1Ex1();
void p1Ex2();
void p1Ex3();
void p1Ex4();
void p1Ex5();

void pointers1()
{
	//p1Ex1();
	//p1Ex2();
	//p1Ex3();
	//p1Ex4();
	p1Ex5();
}

void p1Ex1()
{
	int a = 10;
	int* aPtr = &a;

	cout << &a << endl << aPtr << endl;	// should be the same

	cout << a << endl << *aPtr << endl;


	// Dangling pointer
	//int* bPtr;	// contains garbage hence bPtr is a dangling pointer (uninitialized pointer is a compile time error)

	// pointer must always be initalized (if not known at the declartion time, it must be initialized with a a null value)
	int* bPtr = nullptr;
	cout << bPtr << endl;
}

void passByReferenceWithPtr(int* aPtr)
{
	cout << "Original value received in function: " << *aPtr << endl;
	(*aPtr)++;
	cout << "Changed value in function: " << *aPtr << endl;
}

void passByReferenceWithPtr2(int* aPtr)
{
	int a = *aPtr;
	cout << "Original value received in function: " << a << endl;
	a++;
	cout << "Changed value in function: " << a << endl;
}

void p1Ex2()
{
	int a = 10;
	cout << "Before calling the function, a: " << a << endl;
	passByReferenceWithPtr(&a);
	cout << "After calling the function, a: " << a << endl;

	int b = 10;
	cout << "Before calling the funciton, b: " << b << endl;	// 10
	passByReferenceWithPtr2(&b);
	cout << "After calling the funciton, b: " << b << endl;	// 10
}

void p1Ex3()
{
	int a = 10, b = 20;
	const int c = 30;
	
	// 1. Non-const pointer to non-const value
	int* aPtr = &a;
	aPtr = &b;	// valid because pointer itself is not a constant
	*aPtr = 100;	// valid because pointer can change the value
	//aPtr = &c;	// error because a pointer to non-const value cannot point to a constant variable

	// 2. Non-const pointer to const value
	const int* a2Ptr = &a;
	a2Ptr = &b;	// valid because pointer itself it not a constant
	//*a2Ptr = 200;	// error because pointer is declared not to change the value of the variable to which it points
	a2Ptr = &c;	// valid because pointer a2Ptr is a pointer to a const

	// 3. Const pointer to non-const value
	int* const a3Ptr = &a;
	//a3Ptr = &b;	// error because pointer itself is a constant so cannot be reassigned
	*a3Ptr = 300; // valid because a3Ptr is a pointer to non-const

	// 4. const ptr to a const value
	const int* const a4Ptr = &a;
	//a4Ptr = &b;	// error because the pointer itself is a const
	//*a4Ptr = 400;	// error beacause pointer is declared as a pointer to const

	// arrays are const pointers to non-const
	int arr[5] = {};
	//arr = &a;	// error because array names are const pointers
}

void p1Ex4()
{
	int a = 10;
	cout << "Address of a: " << &a << endl;
	cout << "Value of a: " << a << endl;

	int* aPtr = &a;	// This is a pointer to (a)
	cout << "Address of aPtr: " << &aPtr << endl;
	cout << "Value of aPtr: " << *aPtr << ". Shoud be equal to the value of a" << endl;

	int** aPtr2 = &aPtr;
	cout << "Address of aPtr2: " << &aPtr2 << endl;
	cout << "Value of aPtr2: " << *aPtr2 << ". Should be equal to the value of aPtr" << endl;

	int*** aPtr3 = &aPtr2;
	cout << "Address of aPtr3: " << &aPtr3 << endl;
	cout << "Value of aPtr2: " << *aPtr3 << ". Should be equal to the value of aPtr2" << endl;
}

void p1Ex5()
{
	int* const* aPtr;

	const int** const aPtr2 = nullptr;

	const int* const* aPtr3;

	const int* const* const aPtr4 = nullptr;

	const int* const** const* const* aptr5;
}