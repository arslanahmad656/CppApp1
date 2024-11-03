#include "Date.h"
#include <iostream>

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;

	cout << "Date object constructed. Date: " << toString() << endl;
}

Date::~Date()
{
	cout << "Date object destroyed. Date: " << toString() << endl;
}

int Date::getYear() const
{
	return year;
}

int Date::getMonth() const
{
	return month;
}

int Date::getDay() const
{
	return day;
}

void Date::setYear(int year)
{
	this->year = year;
}

void Date::setMonth(int month)
{
	this->month = month;
}

void Date::setDay(int day)
{
	this->day = day;
}

string Date::toString() const
{
	string date = to_string(year) 
		+ "/" + to_string(month) 
		+ "/" + to_string(day) 
		+ " Mem Addrs: (" + to_string(reinterpret_cast<uintptr_t>(this)) + ")";
	return date;
}
