#include <iostream>
using namespace std;

static void Test()
{
	double d = 1;	// cast to double 1.0
	int i = 3.14;	// cast to int (3)
	short s = 3.14;	// cast to short (3)

	long l = 1;		// cast from int to long (1)
	short s2 = 1;	// cast from int to short (1)
	int i2 = 1;		// no casting because literal 1 is of type int
	double d2 = 3.14;	// no casting since literal 3.14 is of type double
	float f = 3.14;	// casting from double to float

	float f2 = 3.14f;	// no casting since suffix of float is applied
	long l3 = 1l;	// no casting
	long long ll = 1ll;	// no casting

	short s4 = 1;	// no suffix available for short
}

static void TestChar()
{
	char c = 65;	// cast int to char	c: A
	int i = 'A';	// cast char to int i: 65

	cout << "c: " << c << " i: " << i << endl;

	char c1 = 'A';
	c1 = c1 + 1;	// c1 = (char)((int)c1 + 1);

	char c2 = 'A';
	c2 = c2 + '1';
	cout << c2 << endl;	// output ? r

	int i2 = 10;
	i2 = i2 + '\n';		// i2 = i2 + (int)'\n'
	cout << i2 << endl;	// output ? 20
}

static void incrementOperators()
{
	int a = 1;
	a++;
	cout << a << endl;	// 2

	int b = 1;
	++b;
	cout << b << endl;	// 2

	int c = 1, d = 1;

	cout << c++ << endl;	// 1
	cout << c << endl;		// 2
	cout << ++d << endl;	// 2

	int e = 1;
	int f = 1;

	int g = e++ + ++e + ++e + f++;	// output ?
	cout << "e: " << e << " f: " << f << " g: " << g << endl;
}

static void shortCircuitingMisunderstanding()
{
	int a = 0, b = 1;
	if (a && ++b)	// ++b will never be executed due to short circuiting
	{
		cout << "Condition is true.\n";
	}

	int c = 1, d = 1;
	if (c || ++d)	// ++d will never be executed due to short circuiting
	{

	}
	cout << "After the condition, a: " << a << ", b: " << b << endl;	// output?
}