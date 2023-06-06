//BlackJack(OOP) 0.3.4 - main.cpp
#include<iostream>
#include "Game.h"
using namespace std;
int main() {
	Game game;
	game.play();
	game.Shuffle();
	game.playerRound();
	game.dealerRound();
	system("pause");
	system("cls");
}
