/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			01 August 2015
//
//	Description:	The purpose of this program is to test the findMode() function saved as findMode.cpp
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> findMode(int[], int);

int main() {
	
	int turtles[25] = {1, 2, 3, 4, 3, 2, 1, 4, 1, 1, 4, 4, 25, 25, 25, -1, 0, 3, 0, 25, 0, 0, -1, -1, -1};

	vector<int> myVector = findMode(turtles, 25);

	cout << "The modes in myVector are:" << endl << endl;

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << "position " << i << " : " << myVector[i] << endl;
	}

	cout << endl;

	return 0;
}