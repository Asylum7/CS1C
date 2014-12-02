#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int score = 0;
	int scoreTotal = 0;
	int count = 0;
	float scoreAvg;
	ifstream inFile;
	string inputFile;


	inFile.open("inputfile.txt");

	while(inFile && count < 50)
	{
		inFile >> score;
		scoreTotal = scoreTotal + score;
		count++;
		cout << score << " = Score\n";
	}

	inFile.close();

	scoreAvg = scoreTotal / count;

	cout << "The average is: " << scoreAvg;

	return 0;
}
