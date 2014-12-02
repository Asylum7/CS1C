/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 3
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/9/2014
 ************************************************************************/
#include "CS1C_Student.h"

CS1Cstudent::CS1Cstudent()
	:Student(), assignmentTotal(0), knowsPython(false), gradDate()
{	/*empty body*/   }

CS1Cstudent::CS1Cstudent(string initName,
						 int    initID,
						 int    initAge,
						 string phoneNum,
						 char   initGender,
						 string standing,
						 float  nGPA,
						 int    nAssignTotal,
						 bool   python,
						 Date   initGradDate)

	:Student(initName, initID, initAge, phoneNum, initGender, standing, nGPA),
	 assignmentTotal(nAssignTotal), knowsPython(python), gradDate(initGradDate)
{	}

CS1Cstudent::~CS1Cstudent()
{	/*empty body*/   }


//MUTATORS
void CS1Cstudent::SetPointTotal(int nTotal)
{	assignmentTotal = nTotal;				}

void CS1Cstudent::SetPython(bool doesKnowPython)
{	knowsPython = doesKnowPython;			}

void CS1Cstudent::SetGradDate(Date nGradDate)
{	gradDate = nGradDate;					}

//ACCESSORS
int  CS1Cstudent::GetPointTotal() 		const
{	return assignmentTotal;					}

bool CS1Cstudent::GetPython() 			const
{	return knowsPython;						}

Date CS1Cstudent::GetGradDate() 		const
{	return gradDate;						}

string CS1Cstudent::DoesItKnowPython() 	const
{	return (knowsPython ? "yes" : "no");	}

void   CS1Cstudent::PrintTableHead() 	const
{
	Student::PrintTableHead();

	cout << left << " | ";
	cout << setw(7) << "Total" << " | ";
	cout << setw(8) << "Python?" << " | ";
	cout << setw(10) << "Date";
	cout << right;
}

void CS1Cstudent::PrintTableBar() 		const
{
	cout << setfill('-');
	cout << setw(114) << "-";
	cout << setfill(' ');
}

void CS1Cstudent::PrintStudent() 		const
{
	Student::PrintStudent();

	cout << left << " | ";
	cout << setw(7) << assignmentTotal << " | ";
	cout << setw(8) << DoesItKnowPython() << " | ";
	cout << setw(10) << gradDate.PrintDate();
	cout << right;
}
