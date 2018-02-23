/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			23 July 2015
//
//	Description:	This is a function that can is used to test Point.cpp and LineSegment.cpp
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Point.hpp"
#include "LineSegment.hpp"

using namespace std;

void testPoint();
void testLineSegment();

int main()
{

	cout << "////////////////////////" << endl;
	cout << "// TESTING POINT: " << endl;
	cout << "////////////////////////" << endl << endl;

	testPoint();

	cout << "////////////////////////" << endl;
	cout << "// TESTING LINESEGMENT: " << endl;
	cout << "////////////////////////" << endl << endl;

	testLineSegment();

	return 0;
}

void testPoint()
{
	// declaration of 3 Point objects for validation
	Point p1(1.0, 2.0);
	Point p2(3.0, 4.0);
	Point p3;

	// validation of default constructor which takes 2 doubles as arguments
	cout << "point 1's x value is " << p1.getXCoord() << endl;					// 1.0
	cout << "point 1's y value is " << p1.getYCoord() << endl << endl;			// 2.0

	cout << "point 2's x value is " << p2.getXCoord() << endl;					// 3.0
	cout << "point 2's y value is " << p2.getYCoord() << endl << endl;			// 4.0

	// validation of default constructor that takes no parameters
	cout << "point 3's x value is " << p3.getXCoord() << endl;					// 0.0
	cout << "point 3's y value is " << p3.getYCoord() << endl << endl;			// 0.0

	// validation of setXCoord() and setYCoord() funcitons
	p1.setXCoord(5.0);
	p1.setYCoord(6.0);

	cout << "point 1's new x value is " << p1.getXCoord() << endl;				// 5.0
	cout << "point 1's new y value is " << p1.getYCoord() << endl << endl;		// 6.0

	// validation of the distanceTo() function
	cout << "the distance between point 1 and point 2 is: " << p1.distanceTo(p2) << endl;				// 2.2824 ...
	cout << "the distance between point 2 and point 1 is: " << p2.distanceTo(p1) << endl << endl;		// 2.2824 ...
}

void testLineSegment()
{
	Point p1(1.0, 2.0);
	Point p2(3.0, 4.0);

	// declaration of 2 LineSegment objects for validation
	LineSegment ls1(p1, p2);
	LineSegment ls2;
	
	// validation of default constructor which takes 2 doubles as arguments
	cout << "Line Segment 1's end1 coordinate is ( " << ls1.getEnd1().getXCoord() << " , " << ls1.getEnd1().getYCoord() << " )" << endl;				// (1.0, 2.0)
	cout << "Line Segment 1's end2 coordinate is ( " << ls1.getEnd2().getXCoord() << " , " << ls1.getEnd2().getYCoord() << " )" << endl << endl;		// (3.0, 4.0)


	// validation of default constructor that takes no parameters
	cout << "Line Segment 2's end 1 coordinate is ( " << ls2.getEnd1().getXCoord() << " , " << ls2.getEnd1().getYCoord() << " )" << endl;					// (0.0, 0.0)
	cout << "Line Segment 2's end 2 coordinate is ( " << ls2.getEnd2().getXCoord() << " , " << ls2.getEnd2().getYCoord() << " )" << endl << endl;			// (1.0, 1.0)

	// validation of setEnd1() and setEnd2() funcitons
	ls2.setEnd1(p2);
	ls2.setEnd2(p1);

	cout << "Line Segment 2's new end 1 coordinate is ( " << ls2.getEnd1().getXCoord() << " , " << ls2.getEnd1().getYCoord() << " )" << endl;				// (3.0, 4.0)
	cout << "Line Segment 2's new end 2 coordinate is ( " << ls2.getEnd2().getXCoord() << " , " << ls2.getEnd2().getYCoord() << " )" << endl << endl;		// (1.0, 2.0)

	// validation of the length() function
	cout << "the length of Line Segment 1 is: " << ls1.length() << endl;	// 2.28242 ...
	cout << "the slope of Line Segment 2 is: " << ls2.slope() << endl;		// 1.00

}