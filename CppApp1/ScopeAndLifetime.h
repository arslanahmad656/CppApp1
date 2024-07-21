#pragma once
// 1. Block scope
// 2. function scope
// 3. Global scope

int x = 100;

void testLocalScope()
{
	int x = 10;
	cout << "Outside the block, x is " << x << endl;
	cout << "Global x is " << ::x << endl;
	
	{
		int x = 20;
		cout << "Inside the block, x is " << x << endl;
		cout << "Global x is " << ::x << endl;
	}

	cout << "After the block, x is " << x << endl;
}

void tester()
{
	int x = 10;
	x++;
	cout << x << endl;
}

void testStatic()
{
	tester();

	tester();

	tester();
}
