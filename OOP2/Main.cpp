#include <iostream>
#include "Rectangle.h"
#include "Sequence.h"

using namespace std;

int main()
{
	Rectangle r1;
	Rectangle r2(10);
	Rectangle r3(100, 200);

	Sequence s1(1, 3);

	for (int i = 0; i < 10; i++)
	{
		cout << s1.getNext() << endl;
	}
}