#pragma once

void p4Ex1();
void p4Ex2();
void p4Ex3();

void pointers4()
{
	//p4Ex1();
	//p4Ex2();
	p4Ex3();
}

void p4Ex1()
{
	int a = 10;
	char c = 'a';
	double d = 3.14;

	// void pointer can point to any type
	void* ptr;
	ptr = &a;
	ptr = &c;
	ptr = &d;

	// deference not allowed
	//cout << *ptr << endl;

	// arithematics not allowed
	//ptr++;
}

void printValueOfVoidPointer(void* ptr, char type)
{
	switch (type)
	{
	case 'i':
	{
		int* iPtr = reinterpret_cast<int*>(ptr);
		cout << *iPtr << endl;
	}

	break;
	case 'd':
	{
		double* iPtr = reinterpret_cast<double*>(ptr);
		cout << *iPtr << endl;
	}

	break;

	case 'c':
	{
		char* iPtr = reinterpret_cast<char*>(ptr);
		cout << *iPtr << endl;
	}

	break;
	default:
		cout << "Case not handled";
		break;
	}
}

void p4Ex2()
{
	int a = 10;
	double d = 3.14;
	char c = 'a';

	printValueOfVoidPointer(&a, 'i');
	printValueOfVoidPointer(&d, 'd');
	printValueOfVoidPointer(&c, 'c');
}

void checkEndianness()
{
	uint32_t num = 1;
	char* bytePtr = reinterpret_cast<char*>(&num);

	if (*bytePtr == 1) {
		std::cout << "Your system is little-endian." << std::endl;
	}
	else {
		std::cout << "Your system is big-endian." << std::endl;
	}
}

void p4Ex3()
{
	checkEndianness();
	int n = 0b01000001010000100100001101000100;
	cout << n << endl;
	int* iPtr = &n;

	char* cPtr = reinterpret_cast<char*>(iPtr);
	cout << *cPtr << endl;
	cout << *(cPtr + 1) << endl;
	cout << *(cPtr + 2) << endl;
	cout << *(cPtr + 3)<< endl;

	unsigned short* sPtr = reinterpret_cast<unsigned short*>(iPtr);
	cout << *sPtr << endl;
	cout << *(sPtr + 1) << endl;
	cout << *(sPtr + 2) << endl;
	cout << *(sPtr + 3) << endl;

	double* dPtr = (double*)iPtr;	// will be converted to reinterpret_cast
	cout << *dPtr << endl;
}