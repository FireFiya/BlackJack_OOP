//BlackJack(OOP) 1.0.3 - main.cpp
#include "Game.h"
int main() {
	Game game;
Start:
	game.reRound();
	game.play();
	game.Shuffle();
	game.prepareRound();
	game.playerRound();
	game.dealerRound();
	game.compare();

	if (game.getMoney() <= 0) {
		cout << "���a�w�L�Ѿl����A�C������" << endl;
		system("pause");
		system("cls");
	}
	else {
		string x;
		cout << "�A��@��(Y/N)?" << endl;
		cin >> x;
		system("cls");
		if (x == "Y") {
			goto Start;
		}
		else if (x == "N") {
			cout << "�P�¹C��!" << endl;
			sleep_for(chrono::milliseconds(1000));
			exit(1);
		}
		else {
			cout << "�ڴN��A�n�����o!\n�P�¹C��!" << endl;
			sleep_for(chrono::milliseconds(1000));
			exit(1);
		}
		if (game.getMoney() <= 0) {
			cout << "���a�w�L�Ѿl����A�C������" << endl;
		}
		system("pause");
		system("cls");
	}

	string x;

	cout << "���s�@��(Y/N)?" << endl;
	cin >> x;
	system("cls");
	if (x == "Y") {
		game.reset();
		goto Start;
	}
	else if (x == "N") {
		cout << "�P�¹C��!" << endl;
		sleep_for(chrono::milliseconds(1000));
		exit(1);
	}
	else {
		cout << "�ڴN��A�n�����o!\n�P�¹C��!" << endl;
		sleep_for(chrono::milliseconds(1000));
		exit(1);
	}
}