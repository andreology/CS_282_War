#pragma once
#ifndef _DECK //included for protection in case you use in more than one .cpp. 
#define _DECK
#include "Card.h"
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;
const int CARDS_PER_DECK = 52;

class Deck
{
private:
	
public:
	card *deck0; // pointer to deck array
	int currentCard1; //index of current card in array 
	Deck(); // deck constructor
	void shuffle(); // shuffle deck 
	card dealCard(); // increase currentcard and return card 
	void printDeck(); // print remaining deck and refresh
	int cardsLeft(); // compute remaining cards 
	void refreshDeck(); // reset deck but shuffle 
};
#endif
