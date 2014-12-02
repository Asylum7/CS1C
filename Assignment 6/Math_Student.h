/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 6
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 10/09/2014
 ************************************************************************/
#include "student_header.h"

#ifndef MATH_STUDENT_H_
#define MATH_STUDENT_H_

class MathStudent :	public Student
{
public:
	MathStudent();
	MathStudent(string initName, int    initID,    int initAge,
				string phoneNum, char   initGender,
				string standing, float  nGPA, string nAddress,
				string nCity, string nState, int nZip);

	MathStudent(const MathStudent& copyObject);
	virtual ~MathStudent();

	void CopyStudent(const MathStudent& copyObject);

	void SetAddress(string newAddress);
	void SetCity(string newCity);
	void SetState(string newState);
	void SetZip(int newZip);

	char * GetAddress() const;
	char * GetCity()    const;
	char * GetState()   const;
	int    GetZip()     const;

	virtual void PrintTableHead()  	  const;
	virtual void PrintTableBar()	  const;
	virtual void PrintStudentData()   const;
	virtual void PrintOneStudent()	  const;

private:
	char * address;
	char * city;
	char * state;
	int    zip;
};
#endif /* MATH_STUDENT_H_ */
