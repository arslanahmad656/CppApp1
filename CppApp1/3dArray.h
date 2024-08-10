#pragma once

const int cols = 4;
const int depth = 3;

void test3d1();

void test3dArray()
{
	test3d1();
}

void test3d1()
{
	const int rows = 4;
	int arr[rows][cols][depth] =
	{
		{
			{1, 2},
			{3, 4},
			{3, 6}
		},
		{
			{1, 2}
		},
		{},
		{}
	};
}