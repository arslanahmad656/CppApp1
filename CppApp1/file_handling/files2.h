#pragma once

#include <iostream>
#include<fstream>
using namespace std;

void f2t1()
{
	ofstream fout("wfile1.txt");

	if (!fout)
	{
		cerr << "The file could not be opened!";
		exit(1);
	}

	int x = 10;
	fout << "sdfds" << endl << x << " " << x << endl;
}

void f2t2()
{
	ofstream fout("wfile1.txt", ios::app);

	if (!fout)
	{
		cerr << "The file could not be opened!";
		exit(1);
	}

	fout << "hello again!";
}

void f2t3()
{
	fstream f("wfile1.txt", ios::in | ios::app);

	f << "writing this";	// write (this will only change the position of put pointer)

	char s[100];
	f.getline(s, 100);	// read
}

void f2t4()
{
	fstream f("persons info.dat", ios::in | ios::app);
	if (!f)
	{
		cerr << "The file could not be opened!";
		exit(1);
	}

	cout << "pointers: " << f.tellp() << ", " << f.tellg() << endl;

	int id;
	char fname[100];
	char lname[100];
	int age;

	cout << "Keep entering the id, fname, lname, age (in the same order). Enter EOF for exiting." << endl << endl;

	while (cin >> id >> fname >> lname >> age)
	{
		f << id << " " << fname << " " << lname << " " << age << endl;
		cout << "pointers: " << f.tellp() << ", " << f.tellg() << endl;
	}

	cout << "Data entry is complete! Printing the whole file.";

	char line[1000];
	f.seekg(0, ios::beg);
	cout << "pointers: " << f.tellp() << ", " << f.tellg() << endl;
	while (f.getline(line, 1000))
	{
		cout << line << endl;
	}
}

void testFiles2()
{
	//f2t1();
	//f2t2();
	f2t4();
}