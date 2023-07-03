//BlackJack(OOP) 1.1.0 - Game.h
#ifndef G_H
#define G_H
#include "Deck.h"
using namespace std;
class Game {
public:
	Game();
	void play();
	void prepareRound();
	void Shuffle();
	void playerRound();
	void dealerRound();
	void compare();
	void win();
	void tie();
	void lose();
	void reRound();
	void reset();
	int getPPoint();
	int getDPoint();
	void setMoney(long long);
	void setBet(long long);
	void setOdds(double);
	long long getMoney()const;
	long long getBet()const;
	double getOdds()const;
private:
	static int cardUsed;
	static int Pgot;
	static int Dgot;
	Deck deck;
	long long money=1000000;	//當前持有賭資
	long long bet;	//賭金
	double odds;	//賠率
};
#endif