#pragma once
#include "Date.h"

class TestClass
{
private:
	Date& date;
public:
	TestClass(Date date)
		: date(date)
	{
	}

	string toString()
	{
		return date.toString();
	}
};