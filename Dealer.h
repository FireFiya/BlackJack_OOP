//BlackJack(OOP) 0.1.4 - Game.h
#ifndef D_H
#define D_H
#include "Card.h"
using namespace std;
class Dealer {
public:
	int getPoint()const;
	int getMoney()const;
	int getCard()const;
private:
	int point;	//�d�P�I�ƩM
	static int numOfCards;	//�w����d�P��
};
#endif