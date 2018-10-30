#include "Card.h"
#include "Deck.h";
using namespace std;

extern card currentCard;

//create arrays to store suit, face and cards.
Deck::Deck()
{
	string faces[] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
	string suits[] = { "Hearts","Diamonds","Clubs","Spades"};
	deck0 = new card[CARDS_PER_DECK]; //array to store card objects in deck0.
	currentCard1 = 0;
	for (int count = 0; count<CARDS_PER_DECK; count++)
	deck0[count] = card(faces[count % 13], suits[count / 13]);
}
// shuffle deck using random option
void Deck::shuffle()
{
	//currentCard1;
	for (int first = 0; first<CARDS_PER_DECK; first++) 
	{
		int second = (rand() + time(0)) % CARDS_PER_DECK; // time method to reduce prob. 
		card temp = deck0[first]; // store in temp
		deck0[first] = deck0[second];
		deck0[second] = temp; 
	}

}
//return card to player
card Deck::dealCard()
{
	if (currentCard1>CARDS_PER_DECK)
		return(deck0[0]);
	if (currentCard1 < CARDS_PER_DECK)
		return (deck0[currentCard1++]); // increase current card count. 
	
}
//compute card left in deck 
int Deck::cardsLeft()
{
	int deckSize;
	
	deckSize =  CARDS_PER_DECK - currentCard1;
	return(deckSize);
}
//reset deck 
void Deck :: refreshDeck()
{
	currentCard1 = 0;
	deck0[currentCard1];// return current card from deck array 
}
//print remaining careds in deck array
void Deck::printDeck()
{
	int cL = cardsLeft();
	for (int i = 0; i < cL; i++)
	{
		currentCard = dealCard(); //increase currentcard count 
		cout << i + 1 << ". ";
		cout << currentCard.print() << endl;
		currentCard.getSuitArt();
		cout << "Cards left- " << cardsLeft() << endl;
	}
}