/************************************************************************
 * AUTHOR			: James Davis
 * LAB EXERCISE # 	: 5
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/4/2014
 ************************************************************************/
#include "header.h"

int main()
{
	double radius = 0;
	double height = 0;
	cylinderType cylinder;

	cout << "What is the height of the cylinder? ";
	cin  >> height;

	cout << endl << endl;

	cout << "What is the radius of the cylinder's base? ";
	cin  >> radius;

	cylinder.setHeight(height);
	cylinder.setRadius(radius);

	cout << endl << endl;

	cout << "The volume of the cylinder is: " << cylinder.volume() << endl;
	cout << "And the surface area is:       " << cylinder.surfaceArea() << endl;


	return 0;
}
