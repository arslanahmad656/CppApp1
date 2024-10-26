#pragma once

#include "Item.h"

void memLeak2();

void testMemoryLeakage()
{
	Item* iPtr = new Item(1);
	Item item(10);
	memLeak2();
	exit(-1);
	delete iPtr;
}

void memLeak2()
{
	auto iPtr = new Item(2);
	delete iPtr;
}