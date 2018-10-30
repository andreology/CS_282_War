#include<string>
#include <iostream>
#include "Card.h"

#include "Deck.h"
using namespace std;
// empty card constructor 
card :: card()
{
}
//card constructor 
card :: card(string cardFace, string cardSuit)
{
	face = cardFace;
	suit = cardSuit;
}
//print card 
string card :: print()const
{
	return(face + " of " + suit);
}
//Draw method.
 void card::getSuitArt()//return the point vlaue of the card
{
	
	if (suit == "Hearts")
	{
		cout << "[ <3           <3]" << endl;
		cout << "[	         ]" << endl;
		cout << "[ 	         ]" << endl;
		cout << "[       <3       ]" << endl;
		cout << "[                ]" << endl;
		cout << "[	         ]" << endl;
		cout << "[                ]"  << endl;
		cout << "[ <3   	       <3]" << endl;
		cout << "[ _______________]" << endl;
	}
	else	if (suit == "Diamonds")
	{
		cout << "[ <>           <>]" << endl;
		cout << "[	         ]" << endl;
		cout << "[ 	         ]" << endl;
		cout << "[       <>       ]" << endl;
		cout << "[                ]" << endl;
		cout << "[	         ]" << endl;
		cout << "[                ]" << endl;
		cout << "[ <>   	       <>]" << endl;
		cout << "[ _______________]" << endl;
	}
	else	if (suit == "Clubs")
	{
		cout << "[  *88         *8]" << endl;
		cout << "[*8888    *8888  ]" << endl;
		cout << "[  *88        *88]" << endl;
		cout << "[                ]" << endl;
		cout << "[                ]" << endl;
		cout << "[		 ]" << endl;
		cout << "[  *88      *88  ]" << endl;
		cout << "[*8888      *8888]" << endl;
		cout << "[__*88________*88]" << endl;
	}
	else	if (suit == "Spades")
	{
		cout << "[l<3          l<3]" << endl;
		cout << "[	         ]" << endl;
		cout << "[ 	         ]" << endl;
		cout << "[       l<3      ]" << endl;
		cout << "[                ]" << endl;
		cout << "[	         ]" << endl;
		cout << "[                ]" << endl;
		cout << "[l<3  	      l<3]" << endl;
		cout << "[ _______________]" << endl;
	}

}
int card::getValue()//return the point vlaue of the card
{
	if (face == "A")
	{
		return 1;
	}
	else	if (face == "2")
		{
		return 2;
	}
	else	if (face == "3")
	{
		return 3;
	}
	else	if (face == "4")
	{
		return 4;
	}
	else	if (face == "5")
	{
		return 5;
	}
	else	if (face == "6")
	{
		return 6;
	}
	else	if (face == "7")
	{
		return 7;
	}
	else	if (face == "8")
	{
		return 8;
	}
	else	if (face == "9")
	{
		return 9;
	}
	else	if (face == "10")
	{
		return 10;
	}
	else	if (face == "J")
	{
		return 11;
	}
	else	if (face == "Q")
	{
		return 12;
	}
	else	if (face == "K")
	{
		return 13;
	}
}
/*
card::setCard()
{

}
*/
