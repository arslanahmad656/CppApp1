#pragma once

void test1();
void assignmentByValue();
void assignmentByReference();
void functionPassTest();
void swapTestByValue();
void swapTestByRef();

void AliasesTest()
{
	//test1();
	//assignmentByValue();
	//functionPassTest();
	//swapTestByValue();
	swapTestByRef();
}

void test1()
{
	int a = 10;
	int b = 100;
	
	// int& x;	// error! aliases need to be assigned right away
	int& x = a;	// Create an alias named as x for a. (x and a are the same in memory)
	x = 200;	// changing the value of x is same as changing the value of a (since both the variables are the same in memory)
	cout << a << endl; // output: 200

	x = b;	// assigning the value of b to a (aka x)
	x++;	// incremented the value of a (aka x)
	cout << a << endl;	// output: 101
}

void assignmentByValue()
{
	int a = 10;
	int b = a;	// assignment by value (new variable is created)

	b++;

	cout << a << " " << b << endl; // output: 10 11
}

void assignmentByReference()
{
	int a = 10;
	int& b = a;	// assignment by reference (new variable is not created)

	b++;

	cout << a << " " << b << endl;	// output: 11 11
}

void changeValue(int n)
{
	cout << "Address of n inside changeValue: " << &n << endl;
	cout << "Function received n = " << n << endl;
	n = n * 2;
	cout << "Function changed n = " << n << endl;
}

void changeValue2(int x)
{
	cout << "Address of x inside changeValue2: " << &x << endl;
}

void functionPassTest()
{
	// by default, pass by value is used
	int n = 10;
	cout << "Address of n inside functionPassTest: " << &n << endl;
	changeValue(n);
	changeValue2(n);
	cout << n << endl;	// output: 20
}

void swapByValue(int x, int y)
{
	cout << "At the start of the swap function (by value): x = " << x << ", y = " << y << endl;

	int temp = x;
	x = y;
	y = temp;

	cout << "At the end of the swap function (by value): x = " << x << ", y = " << y << endl;
}

void swapTestByValue()
{
	int x = 10, y = 20;
	cout << "At the start of the test function (by value): x = " << x << ", y = " << y << endl;	// output: 10, 20

	swapByValue(x, y);

	cout << "At the end of the test function (by value): x = " << x << ", y = " << y << endl;	// output: 10, 20
}

void swapByRef(int& x, int& y)
{
	cout << "At the start of the swap function (by value): x = " << x << ", y = " << y << endl;

	int temp = x;
	x = y;
	y = temp;

	cout << "At the end of the swap function (by value): x = " << x << ", y = " << y << endl;
}

void swapTestByRef()
{
	int x = 10, y = 20;
	cout << "At the start of the test function (by value): x = " << x << ", y = " << y << endl;	// output: 10, 20

	swapByRef(x, y);

	cout << "At the end of the test function (by value): x = " << x << ", y = " << y << endl;	// output: 20, 10
}