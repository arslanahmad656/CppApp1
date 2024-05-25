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
	int n1, n2;	// declaration

	cout << "Enter first number: ";
	cin >> n1;

	cout << "Enter second number: ";
	cin >> n2;

	/*cin >> n1 >> n2;*/

	int sum = n1 + n2; // definition

	cout << "The sum of " << n1 << " and " << n2 << " is " << sum;

	/*cout << "The sum of ";
	cout << n1;
	cout << " and ";
	cout << n2;
	cout << " is ";
	cout << sum;*/

	system("pause");
	return 0;
}
