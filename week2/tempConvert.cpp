/************************************************************************
**	Name:			Tucker Dane Walker
**	Date:			03 July 2015
**	Description:	This is a program that converts Celcius temperatures
**					to Fahrenheit temperatures.
*************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	double celcius;													// declaration of variable that will store the celcius temperature
	double fahrenheit;												// declaration of variable that will store the fahrenheit temperature

	cout << "Please enter a Celcius temperature." << endl;			// the user is prompted to enter a celcius temperature
	cin >> celcius;													// celcius gets the value input by the user

	fahrenheit = (9.0 / 5.0)*celcius + 32;							// fahrenheit gets the converted value of the celcius temperature

	cout << "The equivalent Fahrenheit temperature is:" << endl;	// the fahrenheit temperature is displayed to the user
	cout << fahrenheit << endl;

	return 0;
}