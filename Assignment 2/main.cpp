/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT # 	: 2
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: 9/2/2014
 ************************************************************************/
#include "deck_header.h"
/************************************************************************
 *	Perfect Shuffle Program
 *_______________________________________________________________________
 *	This program creates a deck of cards as an instance of the Deck class
 *		and then outputs the initial deck to the console. It then takes
 *		that deck, and perfect shuffles it before printing it again.
 *		Finally, it repeats the perfect shuffles until the deck is back
 *		in it's initial configuration, and outputs the deck a final time,
 *		as well as printing the number of times required to return the
 *		deck to the original configuration.
 *_______________________________________________________________________
 *	INPUTS:
 *		N/A
 *	CALC & OUTPUT:
 *		initialDeck:  The initial deck, remains unchanged for comparison.
 *		shuffledDeck: The shuffled version of the deck.
 ************************************************************************/
int main()
{
	//Creating two decks, one as an initial, one to shuffle and compare.
	Deck initialDeck;	//initial deck, remains unchanged.
	Deck shuffledDeck;	//shuffled deck, compared to initial.

	//print the initial deck.
	cout << "Your initial deck is: \n";
	initialDeck.PrintDeck();
	cout << endl << endl;

	//shuffle the deck once.
	cout << "Shuffling the deck... ";
	shuffledDeck.PerfectShuffle();
	cout << "Done!\n\n";

	//print the shuffled deck.
	cout << "Your new deck is: \n";
	shuffledDeck.PrintDeck();

	//shuffle until shuffledDeck is equivalent to initialDeck.
	cout << "\n\nShuffling deck until it is returned to initial state... ";
	//calls the deck's comparison method, shuffles if return is false.
	while(!initialDeck.CheckEqualDecks(shuffledDeck))
	{
		shuffledDeck.PerfectShuffle();
	}
	cout << "Done!\n\n";

	//print the final shuffledDeck(when it is equal to initialDeck).
	cout << "The final deck is: \n";
	shuffledDeck.PrintDeck();

	//print out how many perfect shuffles were necessary to return to initial.
	cout << "\n\nIt took " << shuffledDeck.GetShuffleCount()
		 << " perfect shuffles to return to the original deck.\n\n";


	return 0;
}
