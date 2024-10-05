using namespace std;

class Rectangle
{
private:	// data members should be private 
	double length = 0;	// for every instance of the Square class, the length and width will have no garbage value instead there will be a well initialized default value.
	double width = 0;

public:
	// Defining the getter functions to prevent the external world from accessing the data members directly
	double getLength()
	{
		return length;
	}

	double getWidth()
	{
		return width;
	}

	// Defining the setters
	// The parameters will be provided by the clients of the class.
	void setLength(double l)
	{
		if (l < 0)
			return;
		length = l;
	}

	void setWidth(double w)
	{
		if (w < 0)
			return;
		width = w;
	}

	double getArea()
	{
		return length * width;
	}
};