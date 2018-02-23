/******************************************************************************************************************************
**
**	Name:			Tucker Dane Walker
**
**	Date:			08 July 2015
**
**	Description:	This program asks the user how many integer he or she would like to enter. The program then prompts the
**					user to enter that many integers. After all the numbers have been entered, the program displays the largest
**					and smallest of those numbers.
**
*******************************************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int numEntries;					// numEntries is declared to track the number of entries the user would like to enter
	int entry;						// entry is declared to store the user's entries
	int min;						// min is declared which will store the minimum value of the user's entries
	int max;						// max is declared which will store the maximum value of the user's entries

	cout << "How many integers would you like to enter?" << endl;		// the user is prompted to enter the number of integeres he/she will enter
	cin >> numEntries;													// numEntries stores the number of entries the user will enter

	cout << "Please enter " << numEntries << " integers." << endl;		// the user is prompted to enter his or her integers
	cin >> entry;														// the user's first entry is stored

	min = entry;					// the minimum value is set equal to the user's first entry because it is currently the minimum
	max = entry;					// the maximum value is set equal to the user's first entry because it is currently the maximum

	for (int i = numEntries; i > 1; i--)	// this for loop iterates (numEntries - 1) times because one entry has already been given
	{
		cin >> entry;						// the user enters his or her next entry

		if (max < entry)					// if the current maximum value stored is less than the user's current entry,
			max = entry;					// then the maximum is set to the new entry value

		if (min > entry)					// if the current minimum value stored is greater than the user's current entry,
			min = entry;					// then the minimum value is set to the new entry value

	}

	cout << "min: " << min << endl;			// the minimum value of the entries entered by the user is displayed
	cout << "max: " << max << endl;			// the maximum value of the entries entered by the user is displayed

	return 0;
}