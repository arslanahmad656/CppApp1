#pragma once

#include "Item.h"
#include <iostream>

using namespace std;

Item global(1);

void createLocalStatic();

void testExit()
{
	createLocalStatic();
	exit(-1);
}

void testAbort()
{
	createLocalStatic();
	abort();
}


void createLocalStatic()
{
	static Item localStatic(2);
}