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
	int point;	//卡牌點數和
	static int numOfCards;	//已抽取卡牌數
};
#endif