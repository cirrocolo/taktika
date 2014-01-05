#include <iostream>

void test1()
{
	int number;

	std::cout << "Type a number" << std::endl;
	std::cin >> number;
	std::cout << "The number you typed was: " << number << std::endl;
	// std::cin >> number;
}

int main()
{
	test1();
	
	return 0;
}