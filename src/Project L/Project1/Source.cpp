#include <iostream>
#include <Windows.h>

void test1() // simple console IO
{
	int number;

	std::cout << "Type a number" << std::endl;
	std::cin >> number;
	std::cout << "The number you typed was: " << number << std::endl;
	}

int main()
{
	test1(); // simple console IO
	
	// while (true); // this is here so the console output on windows will not close
	
	Sleep(1000); // Windows

	return 0;
}