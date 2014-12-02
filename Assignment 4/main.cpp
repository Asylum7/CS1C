/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 4
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/18/2014
 ************************************************************************/
#include "header.h"

int main()
{
	const int NUM_OF_CANDIDATES = 5;
	Candidate * candidateList = new Candidate[NUM_OF_CANDIDATES];
	int		totalVotes	= 0;
	double	votePercent = 0.0;
	int		compareVotes = 0;
	string	winnerName;

	cout << "Hello. Please give us the last names "
		 << "and number of votes for five candidates.\n";

	for (int count = 0; count < NUM_OF_CANDIDATES; count++)
	{
		cout << "\nWhat is candidate " << count + 1 << "'s name? ";
		getline(cin, candidateList[count].name);

		cout << "How many votes does " << candidateList[count].name << " have? ";
		cin  >> candidateList[count].votes;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if (compareVotes < candidateList[count].votes)
		{
			winnerName = candidateList[count].name;
			compareVotes = candidateList[count].votes;
		}
		totalVotes += candidateList[count].votes;
	}

	cout << left << fixed << setprecision(2);
	cout << setw(15) << "\nCandidate" << setw(10) << "Votes" << "% of Votes\n";

	for (int count = 0; count < NUM_OF_CANDIDATES; count++)
	{
		votePercent = float(candidateList[count].votes) / float(totalVotes) * 100;
		cout << setw(15) << candidateList[count].name << setw(10)
			 << candidateList[count].votes << votePercent << endl;
	}

	cout << endl << setw(15) << "Total Votes: " << totalVotes << endl << right;
	cout << "\nThe Winner of the election is " << winnerName << '!';

	return 0;
}
