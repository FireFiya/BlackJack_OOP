//BlackJack(OOP) 0.3.0 - main.cpp
#include<iostream>
#include "Game.h"
using namespace std;
int main() {
	Game game;
	game.play();
	game.playerRound();
	game.dealerRound();

}