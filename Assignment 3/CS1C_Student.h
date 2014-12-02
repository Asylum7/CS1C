/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 3
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/9/2014
 ************************************************************************/
#ifndef CS1C_STUDENT_H_
#define CS1C_STUDENT_H_

#include "student_header.h"
#include "date_header.h"

class CS1Cstudent : public Student
{
public:
	CS1Cstudent();

	CS1Cstudent::CS1Cstudent(string initName, int    initID, int    initAge,
							 string phoneNum, char   initGender,
							 string standing, float  nGPA, int    nAssignTotal,
							 bool   python, Date   initGradDate);

	virtual ~CS1Cstudent();


	//MUTATORS
	void SetPointTotal(int nTotal);

	void SetPython(bool doesKnowPython);

	void SetGradDate(Date nGradDate);


	//ACCESSORS
	int    GetPointTotal() 	  	  const;

	bool   GetPython() 		  	  const;

	Date   GetGradDate() 	      const;

	string DoesItKnowPython()     const;

	virtual void PrintTableHead() const;

	virtual void PrintTableBar()  const;

	virtual void PrintStudent()   const;

protected:

private:
	int  assignmentTotal;
	bool knowsPython;
	Date gradDate;

};

#endif /* CS1C_STUDENT_H_ */
