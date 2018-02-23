/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			09 August 2015
//
//	Description:	This is a class which contains as a data member an array of pointer-to-item (Item*) that can contain up to
//					100 pointer Item pointers. It also has an int data member called arrayEnd that keeps track of the index of
//					the next empy spot in the array. Additionally, it has an addItem function that takes as a parameter a point
//					to an Item and adds it to the array (and updates arrayEnd). It also has a function called totalPrice that
//					returns the total cost of all Items in the ShoppingCart.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

#include "Item.hpp"

class ShoppingCart{

private:
	Item* pointerToItem[100];		// an array which holds up to 100 pointers to Items
	int arrayEnd;					// a variable which keeps track of the index of the next empty spot in pointerToItem

public:

	ShoppingCart();					// constructor

	void setArrayEnd(int);			// set function

	int getArrayEnd();				// get function

	void addItem(Item*);			// a function which takes a pointer to an Item and adds it to the end of pointerToItem
	double totalPrice();			// a function which returns the total cost of all items in the ShoppingCart (ie the pointerToItem array)
};


#endif