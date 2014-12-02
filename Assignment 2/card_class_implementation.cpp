/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 2
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/2/2014
 ************************************************************************/
#include "card_header.h"

Card::Card()
{
	suit = SPADE;
	rank = ACE;
}

Card::Card(Suit cardSuit,
		   Rank cardRank)
{
	suit = cardSuit;
	rank = cardRank;
}

Card::~Card()
{ }

const Suit Card::GetSuit()
{
	return suit;
}

const Rank Card::GetRank()
{
	return rank;
}

void Card::SetSuit(Suit newSuit)
{
	suit = newSuit;
}

void Card::SetRank(Rank newRank)
{
	rank = newRank;
}

const string Card::PrintCard()
{
//	string rankOfSuit;
//	rankOfSuit = " of ";
	return PrintRank() + " of " + PrintSuit();
}

const string Card::PrintSuit()
{
	switch(suit)
	{
	case SPADE:   return "Spades";
				  break;
	case HEART:   return "Hearts";
				  break;
	case CLUB:    return "Clubs";
				  break;
	case DIAMOND: return "Diamonds";
				  break;
	default:	  return "Error";
				  break;
	}
}


const string Card::PrintRank()
{
	switch(rank)
	{
	case ACE:   return "A ";
				break;
	case TWO:   return "2 ";
				break;
	case THREE: return "3 ";
				break;
	case FOUR:  return "4 ";
				break;
	case FIVE:  return "5 ";
				break;
	case SIX:   return "6 ";
				break;
	case SEVEN: return "7 ";
				break;
	case EIGHT: return "8 ";
				break;
	case NINE:  return "9 ";
				break;
	case TEN:   return "10";
				break;
	case JACK:  return "J ";
				break;
	case QUEEN: return "Q ";
				break;
	case KING: 	return "K ";
			  	break;
	default:	return "Error";
				break;
	}
}
