//BlackJack(OOP) 0.3.0 - Game.h
#ifndef G_H
#define G_H
#include "Deck.h"
using namespace std;
class Game {
public:
	Game();
	Game(int, int, double);
	void play();
	void restart();
	void reset();
	void statusOutput()const;
	void playerRound();
	void dealerRound();
	void win();
	void lose();
	void setMoney(int);
	void setBet(int);
	void setOdds(double);
	int getMoney()const;
	int getBet()const;
	double getOdds()const;
private:
	Deck deck;
	static int cardUsed;
	int money;	//當前持有賭資
	int bet;	//賭金
	double odds;	//賠率
};
#endif