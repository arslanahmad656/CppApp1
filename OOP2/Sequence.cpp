#include "Sequence.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Sequence::Sequence(int start, int step)
	: start(start), current(start)	// initializer list
{
	cout << "Constructor of the sequence.";

	if (step == 0)
	{
		abort();
	}

	this->step = step;
}

Sequence::~Sequence()
{
	cout << "Destroying sequence. Its current value is " << current << endl;
}

int Sequence::getNext()
{
	int value = current;
	current = current + step;
	return value;
}
