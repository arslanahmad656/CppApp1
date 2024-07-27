#pragma once

void testReturnedAliasAuto();

void returnByRefTest()
{
	testReturnedAliasAuto();
}

int& getAlias()
{
	int x = 10;

	cout << "Address of x inside getAlias: " << &x << endl;

	/*
	* Never return a reference to an auto variable! 
		because the variable will be destroyed so the caller will receive a DANGLING REFERENCE.
	*/
	return x;
}

int& getStaticAlias()
{
	static int x = 100;	// this is safe because the static variables are stored outside the stack so these variables won't be destroyed after the function returns
	cout << "Address of x inside getStaticAlias: " << &x << endl;
	return x;
}

void testReturnedAliasAuto()
{
	//int& y = getAlias();
	//cout << "Address of y inside testReturnedAliasAuto: " << &y << endl;
	//cout << y << endl;	// output: UNDEFINED!!
	//int& z = getStaticAlias();
	//cout << "Address of z inside testReturnedAliasAuto: " << &z << endl;
	//cout << z << endl; // output: 100

	// this is safe. because the y has stored the VALUE of the alias which getAlias function returned. 
	// It does not matter that the alias has been destroyed because y is not an alias of the returned alias.
	int y = getAlias();	
	cout << y << endl;
}