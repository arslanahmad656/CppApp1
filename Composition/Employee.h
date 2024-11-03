#pragma once
#include <string>
#include "Date.h"

using namespace std;

class Employee
{
private:
	int id;
	string name;
	Date dateOfJoining;

public:
	Employee(int id, string name, Date dateOfJoining);
	~Employee();
	string toString();
};