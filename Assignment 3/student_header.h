/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 3
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/9/2014
 ************************************************************************/
#ifndef STUDENT_HEADER_H_
#define STUDENT_HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student
{
public:
	Student();

	Student(string initName, int    initID,    int initAge,
			string phoneNum, char   initGender,
			string standing, float  nGPA);

	virtual ~Student();


	//MUTATORS
	void SetName(string nName);

	void SetID(int nID);

	void SetAge(int nAge);

	void SetPhone(string nPhoneNum);

	void SetGender(char nGender);

	void SetStanding(string nStanding);

	void SetGPA(float nGPA);

	//ACCESSORS
	string GetName() 			  const;

	int    GetID() 				  const;

	int    GetAge() 			  const;

	string GetPhone() 			  const;

	char   GetGender() 			  const;

	string GetStanding() 		  const;

	float  GetGPA() 			  const;

	virtual void PrintTableHead() const;

	virtual void PrintTableBar()  const;

	virtual void PrintStudent()   const;

protected:

private:
	string name;
	int    id;
	int    age;
	string phoneNumber;
	char   gender;
	string classStanding;
	float  gpa;

};

#endif /* STUDENT_HEADER_H_ */
