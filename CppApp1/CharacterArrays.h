#pragma once

#include<cstring>

void initializationString();
int getLength(const char str[]);
void demoCString();
void inputString1();
void inputString2();
void inputString3();
void inputString4();

void characterArraysTest()
{ 
	//initializationString();
	//demoCString();
	//inputString1();
	//inputString2();
	//inputString3();
	inputString4();
}

void initializationString()
{
	char arr1[20];	// Character array of size 20 initialized with garbage values
	cout << arr1 << endl;	// All garbage will be printed- Further less than or greater than 20 characters may also be printed
	cout << sizeof(arr1) << endl;
	cout << getLength(arr1) << endl << endl;

	char arr2[] = { 'H', 'e', 'l', 'l', 'o' };	// Character array of size 5 initialized with definite values
	cout << arr2 << endl;	// Will print Hello followed by some garbage characters of interdeminate length
	cout << sizeof(arr2) << endl;
	cout << getLength(arr2) << endl << endl;

	char arr3[] = { 'H', 'e', 'l', 'l', 'o', '\0'};	// Character array of size 6 initialized ending with null-terminator character
	cout << arr3 << endl << endl;	// Will print exactly Hello
	cout << sizeof(arr3) << endl;
	cout << getLength(arr3) << endl << endl;

	char arr4[] = "Hello"; // This will be translated to like the array in arr3
	cout << arr4 << endl << endl;	// will print hello
	cout << sizeof(arr4) << endl;
	cout << getLength(arr4) << endl << endl;

	char arr5[] = "Hel\0lo";
	cout << arr5 << endl;	// output: Hel
	cout << sizeof(arr5) << endl;
	cout << getLength(arr5) << endl << endl;
}

int getLength(const char str[])
{
	int length = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	return length;
}

void demoCString()
{
	// 1. Finding str length

	char arr1[100] = "Hello";
	cout << "Length: " << strlen(arr1) << endl;

	// 2. Copying strings
	char source[25] = "Hello World!";
	char dest[100];
	strcpy_s(dest, source);

	cout << dest << endl;

	// 3. concatenation
	char concatenated[100] = "";
	strcat_s(concatenated, arr1);
	strcat_s(concatenated, " World!");
	cout << concatenated << endl;

	// 4. comparison
	char arr3[] = "Hello";
	char arr4[] = "Hello\0sdfdsfdfds";
	char arr5[] = "HELLO";

	cout << "Comparing " << arr3 << " and " << arr4 << ": " << strcmp(arr3, arr4) << endl;
	cout << "Comparing " << arr3 << " and " << arr5 << ": " << strcmp(arr3, arr5) << endl;
	cout << "Comparing " << arr5 << " and " << arr3 << ": " << strcmp(arr5, arr4) << endl;
}


void inputString1()
{
	// taking input using the stream extraction operator
	// If there are no whitespaces, >> operator is enough

	char str1[101];
	cout << "Enter your first name (no spaces), max 100 characters: ";
	cin >> str1;
	cout << "You entered: " << str1 << endl;
	cout << "Enter again: " << endl;
	cin >> str1;
	cout << "You entered: " << str1 << endl;
}

void inputString2()
{
	cout << "Enter your first name and last name separated by spaces (max 100 characters each): ";
	char fName[101];
	char lName[101];
	cin >> fName >> lName;

	cout << "First Name: " << fName << ", Last Name: " << lName << endl;
}

void inputString3()
{
	const int bufferSize = 10;
	char str[bufferSize];
	char str2[bufferSize];
	char str3[bufferSize];
	cout << "Enter a string (for str): ";
	cin.get(str, bufferSize);
	cout << "You entered: " << str << endl;

	cout << "Enter again (for str2): ";
	cin.ignore();
	cin.get(str2, bufferSize);
	cout << str2 << endl;

	cout << "Enter again (for str3): ";
	cin.ignore();
	cin.get(str3, bufferSize);
	cout << str3 << endl;
}

void inputString4()
{
	//int x;
	//cout << "Enter an integer: ";
	//cin >> x;	// has left enter in the stream

	const int bufferSize = 10;
	char str[bufferSize];
	char str2[bufferSize];
	char str3[bufferSize];
	cout << "Enter a string (for str): ";
	//cin.ignore();
	cin.getline(str, bufferSize);
	cout << "You entered: " << str << endl;

	cout << "Enter again (for str2): ";
	//cin.ignore();
	cin.getline(str2, bufferSize);
	cout << str2 << endl;

	cout << "Enter again (for str3): ";
	//cin.ignore();
	cin.getline(str3, bufferSize);
	cout << str3 << endl;
}