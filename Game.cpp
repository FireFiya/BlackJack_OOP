//BlackJack(OOP) 0.1.4 - Game.cpp
#include "Game.h"
Game::Game(int money) {
	this->money = money;
}
int Game::getMoney()const {
	return money;
}