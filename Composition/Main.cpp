#include "Date.h"
#include "Employee.h"
#include "Student.h"
#include "TestClass.h"

#include<iostream>
#include "Teacher.h"

void testComposition()
{
	Date d1(1990, 1, 1);
	Date d2(2024, 11, 3);

	{
		Employee emp1(1, "Employee 1", d1);
	}

	Employee emp2(2, "Employee 2", d2);
}

void testCompositionViaRefernce()
{
	Date d1(1990, 1, 1);
	Date d2(1, 1, 1);

	{
		Student s1(1, d1, &d2);
	}

	Student s2(2, d1, &d2);
}

void testCompositionViaPtr()
{
	Date d1(1, 1, 1);
	Teacher t1(&d1);
}

void test()
{
	Date d1(1, 1, 1);
	TestClass tc1(d1);
	cout << tc1.toString() << endl;
}

int main()
{
	//testComposition();
	//testCompositionViaRefernce();
	testCompositionViaPtr();
	//test();
}