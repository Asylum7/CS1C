/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 5
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/23/2014
 ************************************************************************/
#include "Math_Student.h"

MathStudent::MathStudent()
	:address(NULL), city(NULL), state(NULL), zip(0)
{ cout << "\nMathStudent default constructor called.\n";	}

MathStudent::MathStudent(string initName, int    initID,    int initAge,
						 string phoneNum, char   initGender,
						 string standing, float  nGPA, string nAddress,
						 string nCity, string nState, int nZip)
	:Student(initName, initID, initAge, phoneNum, initGender, standing, nGPA)
{
	address = new char[strlen(nAddress.c_str())+1];
	strcpy(address, nAddress.c_str());
	city = new char[strlen(nCity.c_str())+1];
	strcpy(city, nCity.c_str());
	state = new char[strlen(nState.c_str())+1];
	strcpy(state, nState.c_str());
	zip = nZip;
cerr << "\nMathStudent Overloaded Constructor called.\n";
}

MathStudent::~MathStudent()
{
	delete [] address;
	delete [] city;
	delete [] state;
cerr << "\nMathStudent Deconstructor called.\n";
}

MathStudent::MathStudent(const MathStudent& copyObject)
	:Student(copyObject.GetName(), copyObject.GetID(), copyObject.GetAge(),
			 copyObject.GetPhone(), copyObject.GetGender(),
			 copyObject.GetStanding(), copyObject.GetGPA())
{
	address = new char[strlen(copyObject.address)+1];
	strcpy(address, copyObject.address);
	city = new char[strlen(copyObject.city)+1];
	strcpy(city, copyObject.city);
	state = new char[strlen(copyObject.state)+1];
	strcpy(state, copyObject.state);
	zip = copyObject.zip;
cerr << "\nMathStudent Copy Constructor Called.\n";
}

void MathStudent::CopyStudent(const MathStudent& copyObject)
{
	SetName(copyObject.GetName());
	SetID(copyObject.GetID());
	SetAge(copyObject.GetAge());
	SetPhone(copyObject.GetPhone());
	SetGender(copyObject.GetGender());
	SetStanding(copyObject.GetStanding());
	SetGPA(copyObject.GetGPA());
	address = new char[strlen(copyObject.address)+1];
	strcpy(address, copyObject.address);
	city = new char[strlen(copyObject.city)+1];
	strcpy(city, copyObject.city);
	state = new char[strlen(copyObject.state)+1];
	strcpy(state, copyObject.state);
	zip = copyObject.zip;
cerr << "\nMathStudent deep copy function called.\n";
}

void MathStudent::SetAddress(string newAddress)
{
	if(address != NULL)
	{
		delete [] address;
	}
	address = new char[strlen(newAddress.c_str())+1];
	strcpy(address, newAddress.c_str());
}

void MathStudent::SetCity(string newCity)
{
	if(city != NULL)
	{
		delete [] city;
	}
	city = new char[strlen(newCity.c_str())+1];
	strcpy(city, newCity.c_str());
}

void MathStudent::SetState(string newState)
{
	if(state != NULL)
	{
		delete [] state;
	}
	state = new char[strlen(newState.c_str())+1];
	strcpy(state, newState.c_str());
}

void MathStudent::SetZip(int newZip)
{	zip = newZip;	}


char * MathStudent::GetAddress() 		const
{	return address;	}

char * MathStudent::GetCity() 			const
{	return city;	}

char * MathStudent::GetState() 			const
{	return state;	}

int    MathStudent::GetZip() 			const
{	return zip; 	}

void   MathStudent::PrintTableHead() 	const
{
	Student::PrintTableHead();

	cout << left << " | ";
	cout << setw(25) << "Address" << " | ";
	cout << setw(12) << "City" << " | ";
	cout << setw(6) << "State" << " | ";
	cout << setw(7) << "Zip";
	cout << right;
}

void MathStudent::PrintTableBar() 		const
{
	cout << setfill('-');
	cout << setw(140) << "-";
	cout << setfill(' ');
}

void MathStudent::PrintStudentData() 	const
{
	Student::PrintStudentData();

	cout << left << " | ";
	cout << setw(25) << address << " | ";
	cout << setw(12) << city << " | ";
	cout << setw(6) << state << " | ";
	cout << setw(7) << zip;
	cout << right;
}

void   MathStudent::PrintOneStudent() 	const
{
	PrintTableHead();
	cout << endl;
	PrintTableBar();
	cout << endl;
	PrintStudentData();
}
