#pragma once
#include "Date.h"

class Teacher
{
private:
	Date* dateOfJoining;
public:
	Teacher(const Date* dateOfJoining)
	{
		this->dateOfJoining = new Date(dateOfJoining->getYear(), dateOfJoining->getMonth(), dateOfJoining->getDay());
		cout << "Teacher constructed " << toString() << endl;
	}

	~Teacher()
	{
		delete dateOfJoining;
	}

	string toString()
	{
		return dateOfJoining->toString();
	}
};