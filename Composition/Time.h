#pragma once

#include <iostream>
using namespace std;

class Time
{
private:
	int h, m, s;
public:
	void test()
	{
		h = m = s = 1000;
	}

	void test() const
	{
		cout << h << " " << m << " " << s << endl;
	}

	void hour(int h)
	{
		this->h = h;
	}

	int hour() const
	{
		return h;
	}
};