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
		cout << "玩家已無剩餘資金，遊戲結束" << endl;
		system("pause");
		system("cls");
	}
	else {
		string x;
		cout << "再賭一場(Y/N)?" << endl;
		cin >> x;
		system("cls");
		if (x == "Y") {
			goto Start;
		}
		else if (x == "N") {
			cout << "感謝遊玩!" << endl;
			sleep_for(chrono::milliseconds(1000));
			exit(1);
		}
		else {
			cout << "我就當你要結束囉!\n感謝遊玩!" << endl;
			sleep_for(chrono::milliseconds(1000));
			exit(1);
		}
		if (game.getMoney() <= 0) {
			cout << "玩家已無剩餘資金，遊戲結束" << endl;
		}
		system("pause");
		system("cls");
	}

	string x;

	cout << "重新一局(Y/N)?" << endl;
	cin >> x;
	system("cls");
	if (x == "Y") {
		game.reset();
		goto Start;
	}
	else if (x == "N") {
		cout << "感謝遊玩!" << endl;
		sleep_for(chrono::milliseconds(1000));
		exit(1);
	}
	else {
		cout << "我就當你要結束囉!\n感謝遊玩!" << endl;
		sleep_for(chrono::milliseconds(1000));
		exit(1);
	}
}