/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 2
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/2/2014
 ************************************************************************/
#ifndef DECK_HEADER_H_
#define DECK_HEADER_H_

#include "card_header.h"
#include <iomanip>
using namespace std;

const int DECK_SIZE = 52;

class Deck
{
public:
	Deck();

	~Deck();

	void InitializeDeck();

	//Shuffles the deck perfectly
	//	Splits the deck in half, then places the values into the
	//  deck again, but alternating between the two halves.
	void PerfectShuffle();

	//prints the entire deck in an easy to read format.
	const void PrintDeck();

	//takes in a separate deck and compares them.
	const bool CheckEqualDecks(Deck& compareDeck);

	//returns the shuffleCount member.
	const int  GetShuffleCount();

private:
	Card deck[DECK_SIZE]; //An array of Card objects.
	int  shuffleCount;	  //How many times the deck has been shuffled.
};


#endif /* DECK_HEADER_H_ */
