/*********************************************************************
 * ** Author: 		Tucker Dane Walker
 * ** Date:		02 July 2015
 * ** Description:	This is a program that asks the user for their
 * ** 			favorite animal and then returns the same value
 * *********************************************************************/

#include <iostream>
#include <string>

// a simple example program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
}
