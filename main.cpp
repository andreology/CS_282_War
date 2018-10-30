//name: Andre Barajas
//ID# 011667576
//Class: CECS 282
//War program 1
// September 2017
#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
using namespace std;
Deck deck;
card currentCard;//

int main()
{
	cout << "\t\tWelcome to War!\n\n"; //title
	string name; //guest name
	cout << "Enter player name: ";
	cin >> name;
	char menuOption = '0';
	int guestScore;
	int compScore;
	do
	{
		cout << name << ", choose one? " << endl;
		cout << endl;
		cout << "1.) Get a new card deck(reset deck)." << endl;
		cout << "2.) Show all remaining cards in the deck and quit current game." << endl;
		cout << "3.) Shuffle." << endl;
		cout << "4.) Play War!" << endl;
		cout << "5.) Exit." << endl;
		cout << endl;
		cin >> menuOption;
		deck.shuffle(); // verifying a new shuffled deck

		// start game
		if (menuOption == '4')
		{

			cout << "Now dealing cards... " << endl;
			cout << endl;
			cout << "One for " << name << " ... " << endl;
			currentCard = deck.dealCard(); //get next card
			cout << currentCard.print() << endl;
			currentCard.getSuitArt();
			cout << endl;
			guestScore = currentCard.getValue();
			cout << "One for me... " << endl;
			currentCard = deck.dealCard();
			cout << currentCard.print() << endl;
		    currentCard.getSuitArt();
			cout << endl;
			compScore = currentCard.getValue();
			//checking which player is winning
			if (guestScore == 1 && (compScore > guestScore))
			{
				guestScore = 11;
			}
			else if (compScore == 1 && (guestScore > compScore))
			{
				compScore = 11;
			}
			if (guestScore > compScore)
			{
				cout << name << ", you win!" << endl;
			}
			else if (guestScore < compScore)
			{
				cout << "Computer wins!" << endl;
			}
			else if (guestScore == compScore)
			{
				cout << "It's a tie!" << endl;
			}
			cout << endl;
			cout << "There are ";
			cout << deck.cardsLeft() << +" cards left" << endl;
		}
		//option to print remaining cards in deck array
		else if (menuOption == '2')
		{
			deck.printDeck();
			cout << "There are " << deck.cardsLeft();
			cout << " cards in the deck leftover. " << endl;
			//cin >> menuOption;
			cout << endl;
			deck.refreshDeck();
			

		}
		else if (menuOption == '3')
		{
			deck.shuffle();
			
		}
		else if (menuOption == '1')
		{
			deck.refreshDeck();
		}

		cout << endl;

		//the game loop        
	} while (menuOption != '5');

	//return 0;


	system("PAUSE");

	return 0;

}


 