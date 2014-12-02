/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 3
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/9/2014
 ************************************************************************/
#include "date_header.h"

Date::Date()
	:day(0), month(0), year(0)
{	/*empty body*/   }

Date::Date(int nDay,
		   int nMonth,
		   int nYear)
	:day(nDay), month(nMonth), year(nYear)
{	/*empty body*/   }

Date::~Date()
{	/*empty body*/   }

string Date::PrintDate() const
{
	ostringstream dateString;

	dateString << day << '/' << month << '/' << year;

	return dateString.str();
}


void   Date::SetDate(int nday, int nmonth, int nyear)
{
	day   = nday;
	month = nmonth;
	year  = nyear;
}
