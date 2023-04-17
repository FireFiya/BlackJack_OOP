//BlackJack(OOP) 0.0.3 - Game.h
#ifndef G_H
#define G_H
#include "Card.h"
using namespace std;
class Game {
public:
	Game();
	Game(int);
	int getmoney()const;
	void cardreset();
private:
	static int allcards[52];
	int money;
};
#endif