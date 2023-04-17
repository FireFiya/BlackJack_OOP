//BlackJack(OOP) 0.0.3 - Game.cpp
#include "Game.h"
int Game::allcards[52] = { 0 };
Game::Game() {
	money = 0;
}
Game::Game(int money) {
	this->money = money;
}
int Game::getmoney()const {
	return money;
}
void Game::cardreset() {
	for (int i = 0; i < 52; i++) {
		allcards[i] = { 0 };
	}
}