/******************************************************************************************************************************
**
**	Name:			Tucker Dane Walker
**
**	Date:			18 July 2015
**
**	Description:	The purpose of this program is to test the smallSort function saved as smallSort.cpp
**
*******************************************************************************************************************************/

#include <iostream>

using namespace std;

void smallSort(int &a, int &b, int &c);

int main()
{
	int A;
	int B;
	int C;

	cout << "Enter three integers" << endl;
	cin >> A;
	cin >> B;
	cin >> C;

	smallSort(A, B, C);

	cout << "A: " << A << " B: " << B << " C: " << C << endl;

	return 0;
}