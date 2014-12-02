/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 2
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/2/2014
 ************************************************************************/
#include "deck_header.h"

Deck::Deck()
{
	shuffleCount = 0;
	InitializeDeck();
}


Deck::~Deck()
{ }


void Deck::InitializeDeck()
{
	int index = 0;

	for(int cardSuit = 0; cardSuit < 4; cardSuit ++)
	{
		for(int cardRank = 0; cardRank < 13; cardRank ++)
		{
			deck[index].SetSuit(Suit(cardSuit));
			deck[index].SetRank(Rank(cardRank));
			index ++;
		}
	}
}


void Deck::PerfectShuffle()
{
	int index;
	int count;
	Card firstHalf[DECK_SIZE / 2];
	Card secondHalf[DECK_SIZE / 2];

	index = 0;
	count = 0;

	for(count = 0; count < DECK_SIZE / 2; count++)
	{
		firstHalf[index] = deck[count];
		index ++;
	}

	index = 0;

	for(count = DECK_SIZE / 2; count < DECK_SIZE; count ++)
	{
		secondHalf[index] = deck[count];
		index ++;
	}

	index = 0;
	count = 0;

	while(count < DECK_SIZE)
	{
		deck[count] = firstHalf[index];
		count ++;
		deck[count] = secondHalf[index];
		count ++;
		index ++;
	}

	shuffleCount ++;
}


const void Deck::PrintDeck()
{
	cout << left;
	for(int index = 0; index < DECK_SIZE; index ++)
	{
		cout << setw(15)<< deck[index].PrintCard();
		if((index + 1)%4 != 0)
		{
			cout << " | ";
		}
		else
		{
			cout << endl;
		}
	}
	cout << right;
}


const bool Deck::CheckEqualDecks(Deck& compareDeck)
{
	bool decksEqual = true;
	int  index = 0;

	while(decksEqual && index < DECK_SIZE)
	{
		if(deck[index].GetRank() != compareDeck.deck[index].GetRank())
		{
			decksEqual = false;
		}
		index ++;
	}
	return decksEqual;
}


const int  Deck::GetShuffleCount()
{
	return shuffleCount;
}
