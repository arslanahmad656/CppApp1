#pragma once

class Sequence
{
private:
	int start;	// no restriction
	int step;
	int current;
public:
	Sequence(int start, int step);
	~Sequence();
	int getNext();
};