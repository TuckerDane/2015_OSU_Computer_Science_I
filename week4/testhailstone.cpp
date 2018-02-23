/******************************************************************************************************************************
**
**	Name:			Tucker Dane Walker
**
**	Date:			19 July 2015
**
**	Description:	The purpose of this program is to test the hailstone function saved as hailstone.cpp
**
*******************************************************************************************************************************/

#include <iostream>

using namespace std;

int hailstone(int startingNum);

int main()
{
	int number;

	cout << "Give me a starting number for hailstone" << endl;
	cin >> number;
	
	cout << "the number of steps for hailstone is: " << hailstone(number) << endl;

	return 0;
}