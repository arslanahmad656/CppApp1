#pragma once

void rTest1();
void rTest2();
void rTest3();

int fCount = 0;
int gCount = 0;
int iCount = 0;

void recursionTest()
{
	//rTest1();
	//rTest2();
	rTest3();
}


void f()
{
	cout << fCount << endl;
	fCount++;
	if (fCount == 3)
	{
		return;
	}
	
	f();
}

void rTest1()
{
	f();
}

void g()
{
	cout << "Before " << gCount << endl;
	gCount++;
	if (gCount == 3)
	{
		return;
	}

	g();
	cout << "After " << gCount << endl;
}

void rTest2()
{
	g();
}

void h()
{
	static int hCount = 0;
	cout << "Calling h\n";
	hCount++;
	if (hCount == 3)
	{
		cout << "Returning" << endl;
		return;
	}

	h();
}

void rTest3()
{
	h();
}