#include "Item.h"
#include <iostream>

using namespace std;

Item::Item(int id)
	: id(id)
{
	cout << "CONSTRUCTOR FOR OBJECT " << id << endl;
}

Item::~Item()
{
	cout << "DESTRUCTOR FOR OBJECT " << id << endl;
}
