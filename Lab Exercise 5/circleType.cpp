#include "header.h"

void circleType::setRadius(double r)
{
	(r >= 0 ? radius = r : radius = 0);

//	if (r >=0)
//		radius = r;
//	else
//		radius = 0;
}

double circleType::getRadius()
{
	return radius;
}

double circleType::area()
{
	return PI * radius * radius;
}

double circleType::circumference()
{
	return 2 * PI * radius;
}

circleType::circleType(double r)
{
	setRadius(r);
}
