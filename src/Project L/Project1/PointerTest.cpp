#include "PointerTest.h"
#include <iostream>


PointerTest::PointerTest()
{
	std::cout << "This is gonna be hairy..." << std::endl << std::endl;
}

void PointerTest::EasyTest(int i)
{
	easy = &i;
	for (int loop = 0; loop < 10; loop++) {
		*easy += 1;
		std::cout << "easy: " << easy << ", &easy: " << &easy << ", *easy: " << *easy << std::endl;
	}
}