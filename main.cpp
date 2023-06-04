//BlackJack(OOP) 0.3.3 - main.cpp
#include<iostream>
#include "Game.h"
using namespace std;
int main() {
	Game game;
	game.play();
	game.playerRound();
	game.dealerRound();
	Deck deck;	//´ú¸Õ¥Î
	system("pause");
	system("cls");
}