/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 6
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 10/09/2014
 ************************************************************************/
#include "Math_Student.h"
#include "CS1C_Student.h"

void PrintAll(const Student & printStudent);

int main()
{
	Date compGradDate(12, 6, 2017);

	MathStudent numberStudent("Jeremy Lin", 12456717, 25, "617-823-8925",
							  'M', "Freshman", 3.0, "42 Harwood Avenue",
							  "Harwich", "MA.", 82653);

	CS1Cstudent compStudent("James Davis", 98035769, 25, "661-877-8825",
							'M', "Sophomore", 3.5, 120, true, compGradDate);

	Student		student("Douglas Adams", 42424242, 42, "666-987-0042",
						'M', "Senior", 4.2);

	cout << endl << endl;
	PrintAll(numberStudent);
	cout << endl << endl;
	PrintAll(compStudent);
	cout << endl << endl;
	PrintAll(student);
	cout << endl << endl;

	return 0;
}

void PrintAll(const Student & printStudent)
{
	printStudent.PrintOneStudent();
}
