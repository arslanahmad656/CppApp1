#pragma once

const int arrayCols = 3;

void twoDtest1();
void print2dArray(int arr[][arrayCols], int rows, int arrayCols);
void twoDTest2();

void test2dArray()
{
	//twoDtest1();
	twoDTest2();
}

void twoDtest1()
{
	const int rows = 4;
	// int arr[rows][arrayCols] = {}; // create a  3 x 3 array with all elements intialized to zero.

	int arr[rows][arrayCols] =	// except for dimension 0, mentioning size is mandatory
	{
		{1, 23, 3},	// row# 0 initialized to 1, 23, 3
		{4},	// row# 1 initialized to 4, 0, 0
		{},	// row# 2 initialized to 0, 0, 0
		// row# 3 contains the garbage values
	};

	print2dArray(arr, rows, arrayCols);
}

void print2dArray(int arr[][arrayCols], int rows, int arrayCols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < arrayCols; j++)
		{
			cout << setw(4) << arr[i][j];
		}

		cout << endl;
	}
}

void twoDTest2()
{
	int arr[4][arrayCols] =	// except for dimension 0, mentioning size is mandatory
	{
		{1, 23, 3},	// row# 0 initialized to 1, 23, 3
		{4},	// row# 1 initialized to 4, 0, 0
		{},	// row# 2 initialized to 0, 0, 0
		// row# 3 contains the garbage values
	};

	cout << arr[2, 0] << endl; // output?
}