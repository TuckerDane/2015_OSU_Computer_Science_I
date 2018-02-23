/******************************************************************************************************************************
**
**	Name:			Tucker Dane Walker
**
**	Date:			18 July 2015
**
**	Description:	The purpose of this program is to test the fallDistance function saved as fallDistance.cpp
**
*******************************************************************************************************************************/

#include <iostream>

using namespace std;

double fallDistance(double);
float fallDistance(float);

int main()
{
	double t;
	double a;

	float T;
	float A;

	cout << "Give me a double time in seconds" << endl;
	cin >> t;
	cout << "Give me a float time in seconds" << endl;
	cin >> T;

	cout << "The distance the double object fell is " << fallDistance(t) << " meters" << endl;
	cout << "The distance the float object fell is " << fallDistance(T) << " meters" << endl;

	return 0;
}