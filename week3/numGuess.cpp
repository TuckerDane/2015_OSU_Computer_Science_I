/******************************************************************************************************************************
**
**	Name:			Tucker Dane Walker
**
**	Date:			08 July 2015
**
**	Description:	This is a program that prompts the user to enter an integer that the player will try to guess. It then
**					promts the player for an integer If the player's guess is higher than the target number, the program 
**					displays "too high". If the user's guess is lower than the target number, the program displays "too low". 
**					The player is given additional guesses until the target number is reached. The program then displays 
**					"you guessed it in 'n' tries" where 'n' is the number of guesses it took to reach the target number.		
**
*******************************************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int userNum;													// declaration of the integer that the user inputs
	int playerGuess;												// declaration of the guess the player inputs

	cout << "Enter the number for the player to guess." << endl;	// the program prompts the user to enter an integer for the player to guess
	cin >> userNum;													// the program stores the user's integer in userNum

	cout << "Enter your guess." << endl;							// the program prompts the player to enter a guess as to what the user's integer is
	cin >> playerGuess;												// the program stores the player's guess in playerGuess

	int counter = 1;												// a counter variable is declared and initialized to 1 because the player has made 1 guess

	while (playerGuess != userNum)									// this while loop runs so long as the player did not guess the user's integer
	{
		if (playerGuess > userNum)									// if the player's guess was greater than the user's integer
		{
			cout << "Too high - try again." << endl;				// the program tell the player that his or her guess is too high4
		}
		else														// else the player's guess is too low
		{
			cout << "Too low - try again." << endl;					// the program tells the player that his or her guess is too low
		}

		cin >> playerGuess;											// the program stores the player's new guess
		counter++;													// the counter variable is increased by one because the user has entered in an additional guess
	}

	cout << "You guessed it in " << counter;						// once the player enters the correct value of the user's integer, the program tells the player
																	// the number of tries it took to guess the correct number.
	if (counter == 1)												// if it only took 1 try to find the number
	{
		cout << " try." << endl;									// the program displays that it took 1 "try"
	}
	else															// otherwise, the program displays that it took n "tries"
	{
		cout << " tries." << endl;
	}

	return 0;
}