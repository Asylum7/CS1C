/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 2
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/2/2014
 ************************************************************************/
#ifndef CARD_HEADER_H_
#define CARD_HEADER_H_

#include <iostream>
using namespace std;

enum Suit
{
	SPADE, HEART, CLUB, DIAMOND
};

enum Rank
{
	ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
};

class Card
{
public:
	//default constructor
	Card();

	//overloaded constructor, accepts specific values.
	Card(Suit cardSuit,
		 Rank cardRank);

	//destructor
	~Card();

	//returns the suit member.
	const Suit GetSuit();

	//returns the rank member.
	const Rank GetRank();

	//sets the suit member to a new value.
	void SetSuit(Suit newSuit);

	//sets the rank member to a new value.
	void SetRank(Rank newRank);

	//returns a string of the card, with the rank and the suit.
	const string PrintCard();

	//returns a string version of the suit value.
	const string PrintSuit();

	//returns a string version of the rank value.
	const string PrintRank();

private:
	Suit suit;  //the value of the suit (IE Spades, Clubs, etc.)
	Rank rank;  //the rank of the card (IE Ace, King, 3, etc.)
};



#endif /* CARD_HEADER_H_ */
