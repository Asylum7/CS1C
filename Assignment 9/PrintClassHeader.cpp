/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT #9	: Templates
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: October 21th, 2014
 ************************************************************************/
#include "header.h"
/************************************************************************
 *	FUNCTION PrintHeaderToFile
 *_______________________________________________________________________
 *	This function plugs assignment information into a class header and
 *		prints it to a .txt file.
 *_______________________________________________________________________
 *	PRE-CONDITIONS
 *		oFile:  output file variable for the header to print to.
 *		asName: assignment name.
 *		asType: assignment type.
 *		asNum:  assignment number.
 *	POST-CONDITIONS
 *		This function will output the class header to an output file.
 ************************************************************************/
string PrintHeader(string asName, 	// IN - assignment Name
				   char asType, 	// IN - assignment type
				   int asNum)		// IN - assignment number
{
	ostringstream heading;

	heading << left;
	heading << "*****************************************************";
	heading << "\n* Programmed by : James Davis";
	heading << "\n* " << setw(14) << "CLASS" << ": CS1C";
	heading << "\n* " << setw(14) << "SECTION" << ": TTH: 6pm\n";
	if (toupper(asType) == 'L')
	{
		heading << "* Lab #" << setw(9);
	}
	else
	{
		heading << "* Assignment #" << setw(2);
	}
	heading << asNum << ": " << asName;
	heading << "\n*****************************************************\n\n";
	heading << right;

	return heading.str();
}
