/******************************************************************************************************************************
**
**	Name:			Tucker Dane Walker
**
**	Date:			18 July 2015
**
**	Description:	This is a void function that takes three int parameters by reference and sorts their valuees into ascending
**					order, so that the first parameter now has the lowest value, the second parameter the middle value, and the
**					third parameter has the highest value.
**
*******************************************************************************************************************************/

void smallSort(int &a, int &b, int &c)		// variables a, b, and c are passed by reference
{
	int temp;								// declaration of a temporary variable to allow sorting of variables

	while (!(a <= b && b <= c))				// while the variables a, b, and c are not in ascending order
	{
		temp = a;							// rotate a, b, and c using temp as a placeholder
		a = b;
		b = c;
		c = temp;

		if (b > c)							// if the rotation of variables is in descending order, this switches two of them
		{									// so that the rotation is in ascending order
			temp = c;
			c = b;
			b = temp;
		}
	}

}