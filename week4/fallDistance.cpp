/******************************************************************************************************************************
**
**	Name:			Tucker Dane Walker
**
**	Date:			18 July 2015
**
**	Description:	This is a function that can be used to determine the distance an object falls due to gravity in a specific
**					time period by using the formula: d = (1/2)gt^2 where d is the distance in meters, g is 9.8, and t is the
**					time in seconds that the object has been falling. This function takes time as an argument and returns the
**					distance in meters that the object has fallen in that time.
**
*******************************************************************************************************************************/

double fallDistance(double time)		// This function is overloaded in case the main method intends to use either doubles
{										// or floats.
	return (0.5*9.8*time*time);
}

float fallDistance(float time)
{
	return (0.5*9.8*time*time);
}