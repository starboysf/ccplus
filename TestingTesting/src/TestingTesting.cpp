//============================================================================
// Name        : TestingTesting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
#include <string>

int main() {

	std::string input;
	int number;

	std::cout << "Please enter a number: ";
	getline (std::cin, input);
	number = std::stoi(input);

	if (number < 10)
	{std::cout << "The number you entered is less than 10!\n";
	}
	else if (number > 10)
	{
		std::cout << "The number you entered is greater than 10!\n";
	}
	else
	{
		std::cout << "The number you entered is 10\n";
	}

	return 0;
}
