#include <iostream>
using namespace std;

static void validateInput()
{
	// Take valid input from user (1 to 10, both inclusive)

	int input;
	do
	{
		cout << "Enter a number from 1 to 10 (inclusives): ";
		cin >> input;
	} while (input < 1 || input > 10);

	cout << "You have entered " << input << endl;
}

static void validateInputWithFor()
{
	int input;
	cout << "Enter a number from 1 to 10 (inclusives): ";
	cin >> input;
	for (; input < 1 || input > 10; )
	{
		cout << "Enter a number from 1 to 10 (inclusives): ";
		cin >> input;
	}

	cout << "You have entered " << input << endl;
}