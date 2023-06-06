//BlackJack(OOP) 0.3.4 - Game.h
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
	void Shuffle();
	void playerRound();
	void dealerRound();
	void win();
	void lose();
	void setMoney(long long);
	void setBet(long long);
	void setOdds(double);
	long long getMoney()const;
	long long getBet()const;
	double getOdds()const;
private:
	static int cardUsed;
	Deck deck;
	long long money;	//當前持有賭資
	long long bet;	//賭金
	double odds;	//賠率
};
#endif
