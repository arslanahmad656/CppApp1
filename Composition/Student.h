#pragma once
#include "Date.h"

class Student
{
private:
	const int id;
	const Date& dateOfAdmission;
	const Date* dateOfBirth;
public:
	Student(int id, const Date& dateOfAdmission, const Date* dateOfBirth);
	~Student();
	string toString() const;
};