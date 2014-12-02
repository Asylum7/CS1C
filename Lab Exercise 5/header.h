#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
using namespace std;

const double PI = 3.1415926;

class circleType
{
public:
	void setRadius(double r);
		//Function to set the radius.
		//Postcondition: if (r>=0) radius = r;
		//				 otherwise radius = 0;

	double getRadius();
		//Function to return the radius.
		//Postcondition: The value of the radius is returned.

	double area();
		//Function to return the eare of a circle.
		//Postcondidtion: Area is calculated and returned.

	double circumference();
		//Function to return the circumference of a circle.
		//Postcondition: Circumference is calculated and returned.

	circleType(double r = 0);
		//Constructor with a default parameter.
		//Radius is set according to the parameter.
		//The default value of the radius is 0.0;
		//Postcondition: radius = r;

private:
	double radius;
};

class cylinderType : public circleType
{
public:
	cylinderType();

	~cylinderType();

	double volume();

	double surfaceArea();

	void   setHeight(double h);

	double getHeight();

private:
	double height; // height of cylinder.
};

#endif /* HEADER_H_ */
