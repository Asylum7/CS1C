#include "header.h"

cylinderType::cylinderType() :  circleType(), height(0)
{ }

cylinderType::~cylinderType()
{ }

double cylinderType::volume()
{
	return (circleType::area() * height);
}

double cylinderType::surfaceArea()
{
	double area = 0;
	area = 2.0 * PI * circleType::getRadius() * height + 2.0 * circleType::area();
	return area;
}

void cylinderType::setHeight(double h)
{
	height = h;
}

double cylinderType::getHeight()
{
	return height;
}
