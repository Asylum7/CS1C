/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT #9	: Templates
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: October 21th, 2014
 ************************************************************************/
#include "Queue_Template.h"
#include "header.h"
using namespace std;

int main()
{
	Queue<int>intQ;
	Queue<double>doubleQ;
	Queue<string>stringQ;
	cout << PrintHeader("Templates", 'A', 9);

	cout << "\n\nEnqueue ints A:";
	for(int count = 1; count < 7; count++)
	{	intQ.Enqueue(count);
		cout << endl;
		intQ.PrintQueue();}

	cout << "\n\nDequeue ints A:";
	for(int count = 0; count < 4; count++)
	{	intQ.Dequeue();
		cout << endl;
		intQ.PrintQueue();}

	cout << "\n\nEnqueue ints B:";
	for(int count = 1; count < 5; count++)
	{	intQ.Enqueue(count);
		cout << endl;
		intQ.PrintQueue();}

	cout << "\n\nDequeue ints B:";
	for(int count = 0; count < 3; count++)
	{	intQ.Dequeue();
		cout << endl;
		intQ.PrintQueue();}


	cout << "\n\nEnqueue dubs A:";
	for(int count = 1; count < 7; count++)
	{	doubleQ.Enqueue(count);
		cout << endl;
		doubleQ.PrintQueue();}

	cout << "\n\nDequeue dubs A:";
	for(int count = 0; count < 4; count++)
	{	doubleQ.Dequeue();
		cout << endl;
		doubleQ.PrintQueue();}

	cout << "\n\nEnqueue dubs B:";
	for(int count = 1; count < 5; count++)
	{	doubleQ.Enqueue(count);
		cout << endl;
		doubleQ.PrintQueue();}

	cout << "\n\nDequeue dubs B:";
	for(int count = 0; count < 3; count++)
	{	doubleQ.Dequeue();
		cout << endl;
		doubleQ.PrintQueue();}

	cout << "\n\nEnqueue strings A:";
	string name = "James";
	for(int count = 1; count < 7; count++)
	{
		stringQ.Enqueue(name);
		cout << endl;
		stringQ.PrintQueue();}

	cout << "\n\nDequeue strings A:";
	for(int count = 0; count < 4; count++)
	{	stringQ.Dequeue();
		cout << endl;
		stringQ.PrintQueue();}

	cout << "\n\nEnqueue strings B:";
	for(int count = 1; count < 5; count++)
	{
		stringQ.Enqueue(name);
		cout << endl;
		stringQ.PrintQueue();}

	cout << "\n\nDequeue strings B:";
	for(int count = 0; count < 3; count++)
	{	stringQ.Dequeue();
		cout << endl;
		stringQ.PrintQueue();}

	cout << endl << endl;
	intQ.Dequeue();
	intQ.IsEmpty();
	intQ.Dequeue();
	intQ.Dequeue();
	intQ.Dequeue();
	intQ.IsEmpty();

	return 0;
}



