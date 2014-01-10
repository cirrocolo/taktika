#include <iostream>

void test1()
{
	int number;

	std::cout << "Type a number" << std::endl;
	std::cin >> number;
	std::cout << "The number you typed was: " << number << std::endl;
	while (true); // this is here so the console output on windows will not close
}

int main()
{
	test1(); // simple console IO
	
	return 0;
}