//BlackJack(OOP) 0.2.1 - Game.h
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
	int money;	//��e�������
	int bet;	//���
	double odds;	//�߲v
};
#endif