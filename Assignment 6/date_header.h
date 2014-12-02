/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 3
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/9/2014
 ************************************************************************/
#ifndef DATE_HEADER_H_
#define DATE_HEADER_H_

#include <string>
#include <sstream>
using namespace std;

class Date
{
public:
	Date();

	Date(int nDay,
		 int nMonth,
		 int nYear);

	~Date();

	void   SetDate(int nday, int nmonth, int nyear);

	string PrintDate() const;

private:
	int day;
	int month;
	int year;
};

#endif /* DATE_HEADER_H_ */
