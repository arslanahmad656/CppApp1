#pragma once
#include <string>

using namespace std;

class Date
{
public:
	Date(int year, int month, int day);
	~Date();
	int getYear() const;
	int getMonth() const;
	int getDay() const;
	void setYear(int year);
	void setMonth(int month);
	void setDay(int day);
	string toString() const;
private:
	int year;
	int month;
	int day;
};