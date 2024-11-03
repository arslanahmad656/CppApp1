#include "Employee.h"
#include <iostream>

Employee::Employee(int id, string name, Date dateOfJoining)
	: id(id), name(name), dateOfJoining(dateOfJoining)
{
	cout << "Employee constructed. " << toString() << endl;
}

Employee::~Employee()
{
	cout << "Employee destroyed. " << toString() << endl;
}

string Employee::toString()
{
	return "ID: " + to_string(id)
		+ ", name: " + name
		+ ", DOJ: " + dateOfJoining.toString();
}
