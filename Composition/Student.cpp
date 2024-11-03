#include "Student.h"
#include <iostream>

Student::Student(int id, const Date& dateOfAdmission, const Date* dateOfBirth)
	: id(id), dateOfAdmission(dateOfAdmission), dateOfBirth(dateOfBirth)
{
	cout << "Student constructed. " << toString() << endl;
}

Student::~Student()
{
	cout << "Student destroyed. " << toString() << endl;
}

string Student::toString() const
{
	return to_string(id)
		+ ", DOA: " + dateOfAdmission.toString();
}
