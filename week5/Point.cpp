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

#include "Point.hpp"
#include <cmath>

/***************************************************************************************************
**	default constructor
***************************************************************************************************/
Point::Point()
{
	setXCoord(0);
	setYCoord(0);
}

/***************************************************************************************************
**	constructor
***************************************************************************************************/
Point::Point(double xIn, double yIn)
{
	setXCoord(xIn);								// the private variable 'x' is set to the value of xIn
	setYCoord(yIn);								// the private variable 'y' is set to the value of yIn
}

/***************************************************************************************************
**	a function which receives a double and sets the private variable 'x' to its value
***************************************************************************************************/
void Point::setXCoord(double xIn)
{
	x = xIn;								// the private variable 'x' is set to the value of xIn
}

/***************************************************************************************************
**	a function which receives a double and sets the private variable 'y' to its value
***************************************************************************************************/
void Point::setYCoord(double yIn)
{
	y = yIn;								// the private variable 'y' is set to the value of yIn
}

/***************************************************************************************************
**	a function which returns the value of the private variable 'x'
***************************************************************************************************/
double Point::getXCoord()
{
	return x;
}

/***************************************************************************************************
**	a function which returns the value of the private variable 'y'
***************************************************************************************************/
double Point::getYCoord()
{
	return y;
}

/***************************************************************************************************
**	a function which receives a Point object and returns the distance from this Point object to 
**	the Point object that it receives as a parameter
***************************************************************************************************/
double Point::distanceTo(const Point& p2)
{

	return (sqrt(pow((p2.x - x), 2.0) + pow((p2.y - y), 2.0)));		// the distance formula operated on this point and another defined by the parameter p2
}