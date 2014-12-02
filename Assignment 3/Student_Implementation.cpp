/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 4
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/23/2014
 ************************************************************************/
#include "student_header.h"

Student::Student()
: 	name(""), id(0), age(0), phoneNumber(""),
  	gender('N'), classStanding(0), gpa(0.0)
{	/*empty body*/   }

Student::Student(string initName,
				 int    initID,
				 int    initAge,
				 string phoneNum,
				 char   initGender,
				 string standing,
				 float  nGPA)
	:name(initName), id(initID), age(initAge), phoneNumber(phoneNum),
	 gender(initGender), classStanding(standing), gpa(nGPA)
{	}

Student::~Student()
{	/*empty body*/   }


//MUTATORS
void Student::SetName(string nName)
{	name = nName;					}

void Student::SetID(int nID)
{	id = nID;						}

void Student::SetAge(int nAge)
{	age = nAge;						}

void Student::SetPhone(string nPhoneNum)
{	phoneNumber = nPhoneNum;		}

void Student::SetGender(char nGender)
{	gender = nGender;				}

void Student::SetStanding(string nStanding)
{	classStanding = nStanding;		}

void Student::SetGPA(float nGPA)
{	gpa = nGPA;						}


//ACCESSORS
string Student::GetName() 		 const
{ 	return name; 			}

int    Student::GetID() 		 const
{ 	return id; 				}

int    Student::GetAge() 		 const
{ 	return age; 			}

string Student::GetPhone() 		 const
{ 	return phoneNumber; 	}

char   Student::GetGender() 	 const
{ 	return gender; 			}

string Student::GetStanding() 	 const
{ 	return classStanding; 	}

float  Student::GetGPA() 		 const
{ 	return gpa; 			}

void   Student::PrintTableHead() const
{
	cout << left << fixed << setprecision(2);
	cout << setw(20) << "Name"   << " | "<< setw(8) << "ID" << " | ";
	cout << setw(3)	 << "Age"    << " | "<< setw(12) << "Phone Number" << " | ";
	cout << setw(6)  << "Gender" << " | "<< setw(9) << "Standing" << " | ";
	cout << setw(4)  << "GPA";
	cout << right;
}

void  Student::PrintTableBar() 	 const
{
	cout << setfill('-');
	cout << setw(80) << "-";
	cout << setfill(' ');
}

void   Student::PrintStudent()   const
{
	cout << left << fixed << setprecision(2);
	cout << setw(20) << name   << " | " << setw(8) << id << " | " ;
	cout << setw(3)	 << age    << " | " << setw(12) << phoneNumber << " | " ;
	cout << setw(6)  << gender << " | " << setw(9) << classStanding << " | " ;
	cout << setw(4)  << gpa;
	cout << right;
}
