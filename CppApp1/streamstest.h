#pragma once

typedef int** DynArr;
typedef unsigned long long int ulong;
#define PI 3.14159;

void typedefDemo()
{
	DynArr arr = new int* [10];
	ulong i = 10;
	cout << PI;
}

void eofTest()
{
	char text[256];

	cout << "Enter the text which you want to read. Enter EOF to exit:\n\n";

	int i = 0;
	int ch;
	while (i < 254 && ((ch = cin.get()) != EOF))
	{
		text[i++] = ch;
	}

	text[i] = 0;

	cout << "\n\nInput is complete. You have entered the following text:\n" << endl;
	cout << text << endl;
}

void readWrite1()
{
	char text[256];

	cout << "Enter some text:\n\n";
	cin.read(text, 10);

	int readCount = cin.gcount();
	cout << readCount << " bytes were read from the input stream.";
	cout << "\nYou have entered:\n\n";
	cout.write(text, readCount);
}

void setBaseTest()
{
	int x = 10;
	int* ptr = &x;

	cout << dec << ptr << endl;
}

void resettingFlagsTest()
{
	int flags = cout.flags();

	cout << "Orignally, flags is: " << flags << endl;

	cout << fixed;

	cout << cout.flags() << endl;

	cout << showpoint;

	cout << cout.flags() << endl;

	cout << showbase;

	cout << cout.flags() << endl;

	cout << 1.0 << endl;

	cout.flags(flags);

	cout << 1.0 << endl;
}

void inputFlagsTest()
{
	cout << boolalpha << endl;

	cout << "Initially, flags are: " << endl
		<< "eof bit: " << cin.eof() << endl
		<< "fail bit: " << cin.fail() << endl
		<< "bad bit: " << cin.bad() << endl
		<< "good bit: " << cin.good() << endl
		<< "rdState: " << cin.rdstate() << endl << endl;

	int x;
	cout << "enter some value: ";
	cin >> x;


	cout << "After input, flags are: " << endl
		<< "eof bit: " << cin.eof() << endl
		<< "fail bit: " << cin.fail() << endl
		<< "bad bit: " << cin.bad() << endl
		<< "good bit: " << cin.good() << endl
		<< "rdState: " << cin.rdstate() << endl << endl;
}

void getPropertIntInput(int& n)
{
	bool inputFailed = false;
	do
	{
		cout << "Enter an integer value: ";
		/*if (inputFailed)
		{
			int ch;
			int i = 0;
			while ((ch = cin.get()) != EOF)
			{
			}
		}*/

		cin >> n;
		inputFailed = cin.eof() || cin.fail();
		if (inputFailed)
		{
			cout << "You have entered an the input in an invalid format." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (inputFailed);

	cout << "You have enetered: " << n << endl;
}

void streamsTest()
{
	//eofTest();
	//readWrite1();
	//setBaseTest();
	//resettingFlagsTest();
	//inputFlagsTest();

	int i;
	getPropertIntInput(i);
}