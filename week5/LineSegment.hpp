/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			23 July 2015
//
//	Description:	This is a class called LineSegment that contains two Points that represent its two endpoints. It has get
//					set methods for both fields and a constructor that takes two Point parameters and passes them to the set
//					methods to initialize the data members. It also contains a method called length that returns the length of
//					the LineSegment - by using the distanceTo method on its endpoints - and a method called slope that returns
//					the slope of the LineSegment.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

class LineSegment
{
private:
	Point end1;						// a variable which holds the value of one end of the line segment
	Point end2;						// a variable which holds the value of the other end of the line segment

public:
	LineSegment();					// default constructor
	LineSegment(Point, Point);		// constructor

	void setEnd1(Point);			// a function which receives a point and sets the private variable "end1" to its value
	void setEnd2(Point);			// a function which receives a point and sets the private variable "end2" to its value
	
	Point getEnd1();				// a function which returns the value of the private variable "end1"
	Point getEnd2();				// a function which returns the value of the private variable "end2"

	double length();				// a function which returns the length of the line segment defined by the points stored in end1 and end2
	double slope();					// a function which returns the slope of the line segment defined by the points stored in end1 and end2
};

#endif