/******************************************************************************************************************************
**
**	Name:			Tucker Dane Walker
**
**	Date:			08 July 2015
**
**	Description:	This is a program that prompts the user to enter two integers and then adds up all the integers between them
**					(inclusive) and displays the total. The user is allowed to enter the two values in either order.
**
*******************************************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int firstNum;							// the first number that the user is to enter is declared
	int secondNum;							// the first number that the user is to enter is declared

	int sum = 0;							// a variable which whill hold the sum of the integers between the user's declared
											// integers (inclusive) is declared and initialized to 0

	cout << "Please enter two integers." << endl;		// the user is prompted to enter two integers
	
	cin >> firstNum;									// the first of the two integers is entered by the user and stored in firstNum
	cin >> secondNum;									// the second of the two integers is entered by the user and stored in secondNum

	if (firstNum < secondNum)							// if the first number entered is less than the second
	{
		for (int i = firstNum; i <= secondNum; i++)		// then this for loop initializes the variable 'i' to the value of the firstNum,
		{												// increases 'i' by 1 for each iteration of the for loop, and ends when i is <= secondNum
			sum += i;									// each iteration of this for loop adds the current value of i to sum
		}
	}
	else if (firstNum > secondNum)						// if the first number entered is greater than the second
	{
		for (int i = secondNum; i <= firstNum; i++)		// then this loop does the same as the for loop mentioned above, except i is initialized to
		{												// the value of of secondNum and the loop ends when i is <= firstNum
			sum += i;
		}
	}
	else
	{													// if the first and second number happen to be equal in value, then sum of the range between
		sum = firstNum;									// that value entered twice will be the value itself.
	}

	cout << "The sum of the values in that range is:" << endl;		// this statement displays to the user the sum of the values within the range
	cout << sum << endl;											// of the values entered in firstNum and secondNum (inclusive)

	return 0;
}