#include <iostream>
#include "Rectangle.h"
#include "Sequence.h"
#include "DemoMemoryLeakage.h"
#include "ExitVsAbort.h"

using namespace std;

int main()
{
	/*Rectangle r1;
	Rectangle r2(10);
	Rectangle r3(100, 200);

	Sequence s1(1, 3);

	for (int i = 0; i < 10; i++)
	{
		cout << s1.getNext() << endl;
	}*/

	//testMemoryLeakage();
	//testExit();
	//testAbort();

	Rectangle r1(10, 20);
	Rectangle r2(r1.getLength(), r1.getWidth());	// creating a copy using the constructor
	Rectangle r3 = r1;	// copy via assignment operator (memberwise assignment)

	Rectangle r10(100, 200);
	Rectangle& r10Ref = r10;
}