#include <iostream>
#include <cmath>
#include "mylib.h"
#include "File2.h"
#include "WhileLoops.h"
#include "DoLoops.h"
#include "NestedLoops.h"
#include "FunctionsTest.h"
#include "ScopeAndLifetime.h"
#include "FunctionsTest2.h"
#include "Aliases.h"
#include "ReturnByRef.h"
#include "Recursion.h"
#include "Recursion2.h"
#include "Templates.h"
#include "Arrays1.h"
#include "Arrays2.h"
#include "Arrays3.h"
#include "2dArray.h"
#include "3dArray.h"
#include "ArrayPractice.h"
#include "CharacterArrays.h"
using namespace std;
using namespace myns;

int number = 30;

namespace yourns {
	int number = 20;
}

using namespace yourns;

static void IfTest()
{
	int marks = 50;
	bool isPassed = marks > 60;
	if (isPassed)
	{
		cout << "Pass" << endl;
		cout << "Congratulations" << endl;
	}
	else 
	{
		cout << "Fail" << endl;
		cout << "Badluck" << endl;
	}

	cout << "Program ending" << endl;
 }

static void NestedIfElse()
{
	cout << "Enter marks: ";
	unsigned int marks;
	cin >> marks;

	char grade;

	if (marks > 90)
	{
		grade = 'A';
	}
	else
	{
		if (marks > 80)
		{
			grade = 'B';
		}
		else 
		{
			if (marks > 70)
			{
				grade = 'C';
			}
			else 
			{
				if (marks > 60)
				{
					grade = 'D';
				}
				else
				{
					if (marks > 50) 
					{
						grade = 'E';
					}
					else
					{
						grade = 'F';
					}
				}
			}
		}
	}

	cout << "The grade against " << marks << " marks is " << grade << endl;
}

static void NestedIfElse2()
{
	cout << "Enter marks: ";
	unsigned int marks;
	cin >> marks;

	char grade;

	if (marks > 90)
		grade = 'A';
	else if (marks > 80)
		grade = 'B';
	else if (marks > 70)
		grade = 'C';
	else if (marks > 60)
		grade = 'D';
	else if (marks > 50)
		grade = 'E';
	else
		grade = 'F';

	cout << "The grade against " << marks << " marks is " << grade << endl;
}

static void IfTest2()
{
	/*int x = 3;
	if (x > 5)
		cout << "If executing";
	else
		cout << "else executing";
	
	cout << "else line 2 executing";*/

	int x = 3;
	if (x > 5);
	
	
	cout << "If executing";

	cout << "After if";
}

static void conditionalOp1()
{
	int marks;
	cout << "Enter marks: ";
	cin >> marks;

	char result = marks > 60 ? 'P' : 'F';

	cout << "The result is " << result << endl;
}

static void conditionalOp2()
{
	cout << "Enter marks: ";
	unsigned int marks;
	cin >> marks;

	/*char grade;

	if (marks > 90)
		grade = 'A';
	else if (marks > 80)
		grade = 'B';
	else if (marks > 70)
		grade = 'C';
	else if (marks > 60)
		grade = 'D';
	else if (marks > 50)
		grade = 'E';
	else
		grade = 'F';*/

	char grade = marks > 90 
		? 'A' : marks > 80 
		? 'B' : marks > 70 
		? 'C' : marks > 60 
		? 'D' : marks > 50 
		? 'E' 
		: 'F';

	cout << "The grade against " << marks << " marks is " << grade << endl;
}

static void calculatorUsingIfElse()
{
	int n1, n2;
	char op;

	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	cout << "Enter an operator among the following (+, -, *, /): ";
	cin >> op;

	double result;
	if (op == '+')
		result = n1 + n2;
	else if (op == '-')
		result = n1 - n2;
	else if (op == '*')
		result = n1 * n2;
	else if (op == '/')
		result = (double)n1 / n2;
	else
		result = NAN;

	cout << n1 << " " << op << " " << n2 << " = " << result << endl;
}

static void calculatorUsingSwitch()
{
	int n1, n2;
	char op;

	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	cout << "Enter an operator among the following (+, -, *, /): ";
	cin >> op;

	double result;
	/*if (op == '+')
		result = n1 + n2;
	else if (op == '-')
		result = n1 - n2;
	else if (op == '*')
		result = n1 * n2;
	else if (op == '/')
		result = (double)n1 / n2;
	else
		result = NAN;*/

	// converting the above commented out code to swtich

	switch (op)
	{
		case '+':
			result = n1 + n2;
			break;
		case '-':
			result = n1 - n2;
			break;
		case '*':
			result = n1 * n2;
			break;
		case '/':
			result = (double)n1 / n2;
			break;
		default:
			result = NAN;
			break;
	}

	cout << n1 << " " << op << " " << n2 << " = " << result << endl;
}

static void switchNoBreakDemo()
{
	int dayNumber;
	cout << "Enter day number: ";
	cin >> dayNumber;

	switch (dayNumber)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			cout << "It is a working day.";
			break;
		case 6:
		case 7:
			cout << "It is a weekend day.";
			break;
		default:
			cout << "The day number is invalid.";
			break;
	}

	cout << endl;
}

static void testEscapeSequences()
{
	cout << "It is \"sunday\" today" << endl;
	cout << "path: c:\\myfile.txt" << endl;

	cout << "one\ntwo\nthree\n";
	cout << "one\ttwo\tthree\n";

	cout << "one\ba\n";

	cout << "123456789\rworld";

	cout << "one\vtwo\vthree\n";

	cout << "hello\aw\aor\ald\a\n";
	cout << "\a";

	cout << "\\\\\"'" << endl;

	cout << "\123\n";

	char ch = '\'';

	cout << endl;
}

static void escapeSequencesExamples()
{
	std::cout << "Newline: Hello\nWorld" << std::endl;
	std::cout << "Horizontal Tab: Hello\tWorld" << std::endl;
	std::cout << "Backspace: Hello\bWorld" << std::endl;
	std::cout << "Carriage Return: Hello\rWorld" << std::endl;
	std::cout << "Vertical Tab: Hello\vWorld" << std::endl;
	std::cout << "Alert (Bell): Hello\a" << std::endl;
	std::cout << "Backslash: \\" << std::endl;
	std::cout << "Single Quote: \'" << std::endl;
	std::cout << "Double Quote: \"" << std::endl;
	std::cout << "Question Mark: \?" << std::endl;
	std::cout << "Octal Number (101 = 'A'): \101" << std::endl;
	std::cout << "Hexadecimal Number (41 = 'A'): \x41" << std::endl;
}

int main() 
{
	//int n1, n2;	// declaration

	//cout << "Enter first number: ";
	//cin >> n1;

	//cout << "Enter second number: ";
	//cin >> n2;

	///*cin >> n1 >> n2;*/

	//int sum = n1 + n2; // definition

	//cout << "The sum of " << n1 << " and " << n2 << " is " << sum << endl;

	///*cout << "The sum of ";
	//cout << n1;
	//cout << " and ";
	//cout << n2;
	//cout << " is ";
	//cout << sum;*/

	//cout << "Size of long long: " << sizeof(long long) << endl;


	/*int i = 10;
	double d = 20.3333;
	char c = '1';*/

	//int a = 10, b = 3;
	//double a = 10, b = 3;

	/*double a = 10;
	int b = 10;
	double result = a / b;

	cout << result << endl;*/

	//int a = 10;
	//int b = 3;

	//double c = 10;
	//int d = 3;

	//double result = a / b + c / d;	// output ?

	//cout << result << endl;

	/*int a = 10, b = 3;

	double result = (double)a / b;

	cout << result << endl;*/

	//IfTest();
	//NestedIfElse();
	//NestedIfElse2();
	//IfTest2();
	//conditionalOp1();
	//conditionalOp2();
	//calculatorUsingIfElse();
	//calculatorUsingSwitch();
	//switchNoBreakDemo();

	//cout << sizeof(int) << endl;

	//testEscapeSequences();
	//escapeSequencesExamples();

	//Test();
	//TestChar();
	//incrementOperators();
	//shortCircuitingMisunderstanding();

	//Example1();
	/*PrintAlphabets();
	PrintAlphabetsReverse();
	PrintEvenNumbers();
	Print100OddNumbers();*/
	//inputValidationExample();
	//sentinalSumExample();
	//validateInput();
	//isPrime();
	//testNestedLoops();
	//functionsTest();
	//testLocalScope();
	//testStatic();
	//testOverloading();
	//AliasesTest();
	//returnByRefTest();
	//recursionTest();
	//testRecursion2();
	//templateTest();
	//testArrays1();
	//testArrays2();
	//testArrays3();
	//test2dArray();
	//test3dArray();
	//arrayPractice1();
	characterArraysTest();

	system("pause");
	return 0;
}
