/******************************************************************************************************************************
**
**	Name:			Tucker Dane Walker
**
**	Date:			19 July 2015
**
**	Description:	This is a function that takes the starting integer of a hailstone sequence as a parameter and returns how
**					many steps it takes to reach 1
**
*******************************************************************************************************************************/

int hailstone(int num)				// The hailstone function takes an integer called num
{
	int numSteps = 0;				// A counter variable is declared and initialized to 0 to indicate the number of steps it
									// takes the hailstone sequence to reach a value of 1

	while (num != 1)				// while num is not 1, the hailstone sequence is executed to assign the next value of num
	{
		if (num % 2 == 0)			// if num is even,
		{
			num /= 2;				// then num divided by two is the next integer in the sequence.

		}					
		else						// else num is odd
		{
			num *= 3;				// and num multiplied by three, plus one, is the next integer in the sequence.
			num += 1;
		}

		numSteps++;					// a step has been taken, numSteps increases by 1.
	}

	return numSteps;
}