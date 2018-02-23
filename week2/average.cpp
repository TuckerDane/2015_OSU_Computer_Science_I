/************************************************************************
**	Name:			Tucker Dane Walker
**	Date:			03 July 2015
**	Description:	This is a program that gets 5 numbers from the user
**					and returns the average of those numbers
*************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	double num1;										// declaration of the user-defined numbers that will be averaged
	double num2;
	double num3;
	double num4;
	double num5;
	double average;										// declaration of the average variable

	cout << "Please enter five numbers:" << endl;		// asks the user to enter 5 numers
	cin >> num1;										// gets 5 numbers from the user
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;										// and endl so it looks pretty, for science

	average = (num1 + num2 + num3 + num4 + num5) / 5;	// average gets the mean value of the user-defined numbers

	cout << "The average of your five numbers is: ";	// the average is displayed for the user to see
	cout << average << "!" << endl;

	return 0;
}