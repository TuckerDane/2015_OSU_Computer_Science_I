/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			09 August 2015
//
//	Description:	The purpose of this program is to test the ShoppingCart and Item Classes
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include <iostream>
#include "ShoppingCart.hpp"

int main()
{
	Item a("apple", 0.5, 1);
	Item b("bagle", 2, 2);
	Item c("cat", 3, 2);
	Item d("dog", 4, 2);

	ShoppingCart sc1;
	ShoppingCart sc2;
	ShoppingCart sc3;
	ShoppingCart sc4;

	sc1.addItem(&a);
	sc1.addItem(&b);
	sc1.addItem(&c);
	sc1.addItem(&d);


	std::cout << "The Total Price of SC1 is: " << sc1.totalPrice() << std::endl;		// 18.5
	std::cout << "The Total Price of SC2 is: " << sc2.totalPrice() << std::endl;		// 0

	return 0;
}