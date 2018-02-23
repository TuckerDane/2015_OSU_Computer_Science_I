/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			23 July 2015
//
//	Description:	This is a class definition that defines a Point on a coordinate plane.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "LineSegment.hpp"

/***************************************************************************************************
**	default constructor
***************************************************************************************************/
LineSegment::LineSegment()								
{

	LineSegment::end1.setXCoord(0.0);					// sets the default value for end1 to (0.0, 0.0)
	LineSegment::end1.setYCoord(0.0);
	
	LineSegment::end2.setXCoord(1.0);					// set the default value for end2 to (1.0, 1.0)
	LineSegment::end2.setYCoord(1.0);
}

/***************************************************************************************************
**	constructor
***************************************************************************************************/
LineSegment::LineSegment(Point end1In, Point end2In)	
{
	LineSegment::setEnd1(end1In);							// sets the default value of end1 to the Point parameter passed in as end1In
	LineSegment::setEnd2(end2In);							// sets the default value of end2 to the Point parameter passed in as end2In
}

/***************************************************************************************************
**	a function which receives a point and sets the private variable "end1" to its value
***************************************************************************************************/
void LineSegment::setEnd1(Point end1In)					
{
	LineSegment::end1 = end1In;							// sets the value of end1 to the Point parameter passed in as end1In
}

/***************************************************************************************************
**	a function which receives a point and sets the private variable "end2" to its value
***************************************************************************************************/
void LineSegment::setEnd2(Point end2In)					
{
	LineSegment::end2 = end2In;							// sets the value of end2 to the Point parameter passed in as end2In
}

/***************************************************************************************************
**	a function which returns the value of the private variable "end1"
***************************************************************************************************/
Point LineSegment::getEnd1()							
{
	return end1;
}

/***************************************************************************************************
**	a function which returns the value of the private variable "end2"
***************************************************************************************************/
Point LineSegment::getEnd2()							
{
	return end2;
}

/***************************************************************************************************
**	a function which returns the length of the line segment defined by the points stored in end1
**	and end2
***************************************************************************************************/
double LineSegment::length()							
{
	return end1.distanceTo(end2);
}

/***************************************************************************************************
**	a function which returns the slope of the line segment defined by the points stored in end1
**	and end2
***************************************************************************************************/
double LineSegment::slope()								
{	//		(		y2		  -			y1		) /	(		x2		  -			x1		)	
	return ((end2.getYCoord() - end1.getYCoord()) / (end2.getXCoord() - end1.getXCoord()));		// slope equation
}