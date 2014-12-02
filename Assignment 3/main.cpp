/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 3
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/9/2014
 ************************************************************************/
#include "CS1C_Student.h"

int main()
{
	Date gradDate(12, 15, 2015);

	CS1Cstudent student("James", 98035769, 25, "661-877-8825",
						'M', "Sophomore", 3.5, 50, false, gradDate);

	cout << "Printing the student:\n\n";

	student.PrintTableHead();
	cout << endl;
	student.PrintTableBar();
	cout << endl;
	student.PrintStudent();

	cout << endl << endl;
	cout << "The student's name is:    " << student.GetName() << endl;
	cout << "The student's ID is:      " << student.GetID() << endl;
	cout << "The student's Age is:     " << student.GetAge() << endl;
	cout << "The student's Number is:  " << student.GetPhone() << endl;
	cout << "The student's Gender is:  " << student.GetGender() << endl;
	cout << "The student's Class is:   " << student.GetStanding() << endl;
	cout << "The student's GPA is:     " << student.GetGPA() << endl;
	cout << "The student's Total:      " << student.GetPointTotal() << endl;
	cout << "The student knows Python: " << student.DoesItKnowPython() << endl;
	cout << "The student Graduates:    " << student.GetGradDate().PrintDate() << endl;
	cout << endl << endl;

	cout << "Changing name to Tony.\n";
	student.SetName("Tony");
	cout << "Name is now: " << student.GetName() << endl << endl;

	cout << "Changing ID to 45668745.\n";
	student.SetID(45668745);
	cout << "ID is now: " << student.GetID() << endl << endl;

	cout << "Changing age to 30.\n";
	student.SetAge(30);
	cout << "Age is now: " << student.GetAge() << endl << endl;

	cout << "Changing Phone Number to 789-456-1230.\n";
	student.SetPhone("789-456-1230");
	cout << "Phone Number is now: " << student.GetPhone() << endl << endl;

	cout << "Changing Gender to Female.\n";
	student.SetGender('F');
	cout << "Gender is now: " << student.GetGender() << endl << endl;

	cout << "Changing name to Senior.\n";
	student.SetStanding("Senior");
	cout << "Standing is now: " << student.GetStanding() << endl << endl;

	cout << "Changing GPA to 4.0.\n";
	student.SetGPA(4.0);
	cout << "GPA is now: " << student.GetGPA() << endl << endl;

	cout << "Changing Total Points to 456.\n";
	student.SetPointTotal(456);
	cout << "Total Points are now: " << student.GetPointTotal() << endl << endl;

	cout << "Changing Python knowledge to Yes.\n";
	student.SetPython(true);
	cout << "Python Knowledge is now: " << student.DoesItKnowPython() << endl << endl;

	cout << "Changing graduation date to 06/15/2016.\n";
	gradDate.SetDate(06, 15, 2016);
	student.SetGradDate(gradDate);
	cout << "Grad Date is now: " << student.GetGradDate().PrintDate() << endl << endl;


	cout << "Printing the student again:\n\n";

	student.PrintTableHead();
	cout << endl;
	student.PrintTableBar();
	cout << endl;
	student.PrintStudent();

	return 0;
}
