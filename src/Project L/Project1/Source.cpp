#include <iostream>
#include <Windows.h>
#include "PointerTest.h"

//void io() // simple console IO
//{
//	int number;
//
//	std::cout << "Type a number" << std::endl;
//	std::cin >> number;
//	std::cout << "The number you typed was: " << number << std::endl;
//}

void pointers() // basic and advanced pointers handling
{
	PointerTest pointer_test;
	pointer_test.EasyTest(50);
}

int main()
{
	// io ();
	pointers();
	
	Sleep(10000); // Windows

	return 0;
}