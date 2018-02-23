/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			09 August 2015
//
//	Description:	This is a class which contains as a data member an array of pointers-to-item (Item*). It can contain up to
//					100 Item*. It also has an int data member called arrayEnd that keeps track of the index of
//					the next empy spot in the array. It has an addItem function that takes as a parameter a pointer
//					to an Item and adds it to the array (and updates arrayEnd). It also has a function called totalPrice that
//					returns the total cost of all Items in the ShoppingCart.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include "ShoppingCart.hpp"

/*///////////////////////////////////
//	Constructor
///////////////////////////////////*/

ShoppingCart::ShoppingCart()
{
	setArrayEnd(0);						// sets arrayEnd to 0

	for (int i = 0; i < 100; i++)		// sets all 100 pointers in pointerToItem[] to NULL
	{
		pointerToItem[i] = NULL;
	}
}

/*///////////////////////////////////
//	get function
///////////////////////////////////*/

int ShoppingCart::getArrayEnd()
{
	return arrayEnd;
}

/*///////////////////////////////////
//	set function
///////////////////////////////////*/

void ShoppingCart::setArrayEnd(int arrayEndIn)
{
	arrayEnd = arrayEndIn;
}

/*///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Description:	This is a function which adds a pointer to an item at the end of pointerToItem
//					and updates the arrayEnd tracker
//
///////////////////////////////////////////////////////////////////////////////////////////////////////*/

void ShoppingCart::addItem(Item* itemIn)
{
	pointerToItem[arrayEnd] = itemIn;			// replaces NULL value at arrayEnd with itemIn
	arrayEnd++;									// increments arrayEnd by 1
}

/*///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Description:	This is a function which returns the total cost of all Items in the ShoppincCart
//					(or pointerToItem), taking into account the quantity of each Item
//
//	Return:			A double that is the sum of all price values of Items in pointerToItem multiplied 
//					by their respective quantities
//
///////////////////////////////////////////////////////////////////////////////////////////////////////*/

double ShoppingCart::totalPrice()
{

	double totalPrice = 0.0;				// initialization of a variable which tracks the toal price

											// a for-loop which adds the product of each Item's price and quantity to totalPrice
	for (int i = 0; i < arrayEnd; i++)
	{	//			  (		   price of Item	     ) * (		quantity of Item		  )
		totalPrice += (pointerToItem[i] -> getPrice()) * (pointerToItem[i] -> getQuantity());
	}

	return totalPrice;
}
