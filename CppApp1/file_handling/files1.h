#pragma once

#include <iostream>
#include <fstream>
using namespace std;

using uint = unsigned int;

void f1t1()
{
	// 1. create an object of ifstream
	ifstream fin;

	// 2. try to open the file
	fin.open("file1.txt");

	// 3. check if the file has been opened or not
	if (!fin.is_open())
	{
		cerr << "The file could not be opened!";
		exit(1);
	}

	// 4. Do the operations normally
	int i;
	fin >> i;

	cout << "The input read is: " << i << endl;

	// 5. After processing the file, close it!
	fin.close();
}

void f1t2()
{
	// 1. create an object of isteam and specify the file name along with it
	ifstream fin("file2.txt");

	// 2. check if file opened
	if (!fin)
	{
		cerr << "The file could not be opened!";
		exit(1);
	}

	// 3. Processing
	int i;
	fin >> i;

	// 4. no need to close the file explicitly
	// whenever the object fin will go out of scope, the file will be closed
}

void f1t3()
{
	ifstream fin("file3.txt");

	if (!fin)
	{
		cerr << "The file could not be opened!";
		exit(1);
	}

	char ch;
	fin >> ch;

	int i;
	fin >> i;

	float f;
	fin >> f;

	char str1[100];
	fin >> str1;

	char str2[100];
	fin.get(str2, 100);

	char str3[100];
	fin >> str3;

	char str4[100];
	fin.ignore();
	fin.getline(str4, 100);

	char str5[100];
	fin.getline(str5, 100);
}

int getFileSize(ifstream& fin)
{
	fin.seekg(0, ios::end);	// move the get pointer to the end of the file
	int size = fin.tellg();	// get the byte position at which the get pointer currently is

	return size;
}

char* getBufferForFile(int size)
{
	return new char[size];
}

void fillBufferFromFile(ifstream& fin, char* buffer)
{
	fin.seekg(0, ios::beg);

	int i = 0;
	for (int ch; (ch = fin.get()) != EOF; i++)
	{
		buffer[i] = ch;
	}

	buffer[i] = 0;
}

void f1t4()
{
	ifstream fin("file3.txt");

	if (!fin)
	{
		cerr << "The file could not be opened!";
		exit(1);
	}

	int fileSize = getFileSize(fin);
	char* buffer = getBufferForFile(fileSize + 1);

	fillBufferFromFile(fin, buffer);

	cout << buffer << endl;

	delete[] buffer;
}

void f1t5()
{
	ifstream fin("persons info.dat");

	if (!fin)
	{
		cerr << "The file could not be opened!";
		exit(1);
	}

	fin.ignore(numeric_limits<streamsize>::max(), '\n');	// Ignore the header line

	uint id;
	char fname[100];
	char lname[100];
	uint age;

	while (fin >> id >> fname >> lname >> age)
	{
		cout << id << " " << fname << " " << " " << lname << " " << age << endl;
	}
}

void testFiles1()
{
	//f1t1();
	//f1t2();
	//f1t3();
	//f1t4();
	f1t5();
}