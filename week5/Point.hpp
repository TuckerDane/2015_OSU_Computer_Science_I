/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			23 July 2015
//
//	Description:	This is a class called Point that contains two doubles that represent its x- and y-coordinates. It has get
//					and set methods for both fields. It has a constructor that takes two double parameters and passes those
//					values to the set methods to initialize its fields. It has a default constructor that initializes both
//					coordinates to 0. It also contains a method called distanceTo that takes as a parameter a constant reference
//					to another Point and returns the distance from the Point that was passed as a parameter to the Point that
//					we called the method of.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
	double x;							// a variable which holds the value of the x coordinate
	double y;							// a variable which holds the value of the y coordinate

public:
	Point();							// default constructor
	Point(double, double);				// constructor

	void setXCoord(double);				// a function which receives a double and sets the private variable 'x' to its value
	void setYCoord(double);				// a function which receives a double and sets the private variable 'y' to its value

	double getXCoord();					// a function which returns the value of the private variable 'x'
	double getYCoord();					// a function which returns the value of the private variable 'y'

	double distanceTo(const Point&);	// a function which receives a Point object and returns the distance from this Point object
										// to the Point object that it receives as a parameter
};

#endif