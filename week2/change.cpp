/************************************************************************
**	Name:			Tucker Dane Walker
**	Date:			03 July 2015
**	Description:	This is a program that asks the user for a number of cents
**					from 0 to 99 and outputs how many of each type of coin
**					would represent that amount with the fewest total number
**					of coins.
*************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int cents;																			// declaration of the user-defined number of cents

	int quarter;																		// declaration of the variables that will store the number of each coin type
	int dime;																			// that will be returned to the user
	int nickel;
	int penny;

	cout << "Please enter an amount in cents that is less than a dollar." << endl;		// the user is prompted to enter an amount of cents
	cin >> cents;																		// cents gets the number of cents defined by the user

	quarter = cents / 25;																// each coin type gets its value based on the value input by the user
	dime = (cents % 25) / 10;
	nickel = ((cents % 25) % 10) / 5;
	penny = ((cents % 25) % 10) % 5;


	cout << "Your change will be:" << endl;												// the number of each coin type is output to the user
	cout << "Q:" << quarter << endl;
	cout << "D:" << dime << endl;
	cout << "N:" << nickel << endl;
	cout << "P:" << penny << endl;

	return 0;
}