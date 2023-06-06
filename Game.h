//BlackJack(OOP) 0.6.0 - Game.h
#ifndef G_H
#define G_H
#include "Deck.h"
using namespace std;
class Game {
public:
	Game();
	Game(int, double);
	void play();
	void reRound();
	void reset();
	void prepareRound();
	void Shuffle();
	void playerRound();
	void dealerRound();
	int getPPoint();
	int getDPoint();
	void compare();
	void win();
	void tie();
	void lose();
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
	long long money=1000000;	//��e�������
	long long bet;	//���
	double odds;	//�߲v
};
#endif