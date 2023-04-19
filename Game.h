//BlackJack(OOP) 0.1.4 - Game.h
#ifndef G_H
#define G_H
#include "Dealer.h"
using namespace std;
class Game {
public:
	Game(int);
	void play();
	void restart();
	void reset();
	void roundOutPut()const;
	void status()const;
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
	int money;	//當前持有賭資
	double bet;	//賭金
	int odds;	//賠率
	Dealer dealer;	//莊家
	Card card;	//見Card.h
};
#endif