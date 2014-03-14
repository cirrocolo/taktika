#include "PointerTest.h"
#include <iostream>


PointerTest::PointerTest()
{
	std::cout << "This is gonna be hairy..." << std::endl;

}

int PointerTest::EasyTest(int i)
{
	easy = &i;

	return *easy;
}