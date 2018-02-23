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

#include "Item.hpp"

/*///////////////////////////////////
// Constructors
///////////////////////////////////*/

Item::Item()
{
	setName("");
	setPrice(0.0);
	setQuantity(0);
}

Item::Item(std::string nameIn, double priceIn, int quantityIn)
{
	setName(nameIn);
	setPrice(priceIn);
	setQuantity(quantityIn);
}

/*///////////////////////////////////
// get functions
///////////////////////////////////*/

std::string Item::getName()
{
	return name;
}

double Item::getPrice()
{
	return price;
}

int Item::getQuantity()
{
	return quantity;
}

/*///////////////////////////////////
// set functions
///////////////////////////////////*/

void Item::setName(std::string nameIn)
{
	name = nameIn;
}

void Item::setPrice(double priceIn)
{
	price = priceIn;
}

void Item::setQuantity(int quantityIn)
{
	quantity = quantityIn;
}