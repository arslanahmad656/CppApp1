#include <iostream>
#include "mylib.h"
using namespace std;
using namespace myns;

int number = 30;

namespace yourns {
	int number = 20;
}

using namespace yourns;

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

	int a = 10;
	int b = 3;

	double c = 10;
	int d = 3;

	double result = a / b + c / d;	// output ?

	cout << result << endl;

	system("pause");
	return 0;
}
