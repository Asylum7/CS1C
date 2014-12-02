//#include "header.h"
//
//int main()
//{
//	QueueOptions choice;
//	TypeOptions typeChoice;
//	string menu;
//	int mSize;
//	Queue<int>list;
//	Queue* ptr;
//
//	cout << PrintHeader("Templates", 'A', 9);
//
//	//takes in integer choice and converts to MenuOptions enum type, saves in choice.
//	typeChoice = TypeOptions(GetIntInput(TypeMenu(), 3, 0, 0));
//	while(typeChoice != EXIT)
//	{
//
//		//takes in integer choice and converts to MenuOptions enum type, saves in choice.
//		choice = QueueOptions(GetIntInput(QueueMenu(), 7, 0, 0));
//		while(choice != BACK)
//		{
//			cout << endl;
//			QueueSwitch(choice, list);
//			cout << endl << endl;
//			choice = QueueOptions(GetIntInput(QueueMenu(), 7, 0, 0));
//		}
//	}
//	return 0;
//}
//
//
//
