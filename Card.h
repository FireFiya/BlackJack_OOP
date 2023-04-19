//BlackJack(OOP) 0.1.4 - Card.h
#ifndef C_H
#define C_H
#include<iostream>
#include<ctime>
#include<string>
using namespace std;
class Card {
public:
	void pullCard();
	string getCardSuits()const;
	void cardReset();
private:
	static int count;	//
	static int allcards[52];	//
	int cardhold[5];	//
};
#endif