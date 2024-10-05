#include <iostream>
#include "Rectangle.h"

using namespace std;

// Encapsulating the attributes and the functionality of the cube in a class
// Cpp treats class as a user-defined data type.
// Class is just a blue print (occupying no space in memory). It is solely used by the compiler to instantiate the objects.
class Cube
{
public:	// Access modifier to declare all the members publicly available outside the class.
	// Declaring the attributes (data) of the cube
	// Initially every data member contains the garbage value
	double length;
	double width;
	double height;
	const char* color;

	// Defining the behaviours (member functions) of the cube
	// member functions do not need the parameters related to the object.
	// By default, the member functions are inline
	double getVolume()
	{
		return length * width * height;
	}

	double getSurfaceArea()
	{
		return 2 * (length * width + width * height + height * length);
	}
};

void PrintColorByVal(Cube);
void PrintColorByRef(Cube&);

int main()
{
	//// Creating an instance / object of class Cube
	//// type of cube1 is Cube
	//// cube1 is created on stack
	//// Cube is not-primitive. It is complex data type.
	//Cube cube1;
	//Cube cube2;

	//// Use member access operator (.) to access the members of an object
	//cout << cube1.getVolume() << endl;
	//cout << cube1.getSurfaceArea() << endl;
	//cout << cube2.getVolume() << endl;

	//cube1.width = 10;	// This will only modify cube1 (not cube 2)
	//cube1.height = 20;
	//cube1.length = 30;
	//cube1.color = "Black";
	//cube2.color = "Orange";

	//cout << cube1.getVolume() << endl;
	//cout << cube1.getSurfaceArea() << endl;
	//cout << cube2.getVolume() << endl;
	//cout << "Color of cube 1: " << cube1.color << endl
	//	<< "Color of cube 2: " << cube2.color << endl;

	//// Passing cube by value.
	//PrintColorByVal(cube1);
	//cout << cube1.color << endl;

	//// Passing cube by ref.
	//PrintColorByRef(cube1);
	//cout << cube1.color << endl;

	//cout << sizeof(cube1) << endl
	//	<< sizeof(cube2) << endl;

	//cube1.length = -1;	// can the length be negative?????
	//cout << cube1.getVolume() << endl;

	Rectangle r1;
	cout << "Area of r1: " << r1.getArea() << endl;
	r1.setLength(-1);
	r1.setWidth(-2);
	cout << "Area of r1: " << r1.getArea() << endl;
	r1.setLength(10);
	r1.setWidth(20);
	cout << "Area of r1: " << r1.getArea() << endl;
}

void PrintColorByVal(Cube cube)
{
	cout << cube.color << endl;
	cube.color = "XYZ";
}

void PrintColorByRef(Cube& cube)
{
	cout << cube.color << endl;
	cube.color = "XYZ";
}