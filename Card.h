#pragma once
#ifndef H_card
#define H_card
#include<string>
#include<iostream>
using namespace std;
//extern card currentCard;
//Create card class 
class card
{
private:
	
public:
	card(string cardFace, string cardSuit); //constructor to create a card, setting the suit and rank
	string print()const; //print function similar to toString java 
	card();//empty constructor 
	int getValue(); //retreive card value
	string face; //save face value 
	string suit; // save suit value 
	void getSuitArt(); // prototype for printing card drawing.
};
#endif
