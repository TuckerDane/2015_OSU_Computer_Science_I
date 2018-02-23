/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			09 August 2015
//
//	Description:	This is a class that consists of a string called name, a double called price, and an int called quantity.
//					The price represents the price per unit, so that an Item with the name "apple" with a price of "0.80" and a
//					quantity of 4, each of the 4 apples is 0.80 each.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item {

private:
	std::string name;
	double price;
	int quantity;

public:

	Item();								// constructors
	Item(std::string, double, int);		

	std::string getName();				// get functions
	double getPrice();
	int getQuantity();

	void setName(std::string);			// set functions
	void setPrice(double);
	void setQuantity(int);
	
};


#endif