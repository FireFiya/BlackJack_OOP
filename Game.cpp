//BlackJack(OOP) 0.5.0 - Game.cpp
#include "Game.h"

int Game::cardUsed = 0;
int Game::Pgot = 0;
int Game::Dgot = 0;

Game::Game() {
	this->money = 0;
	this->bet = 0;
	this->odds = 0;
}

Game::Game(int money,int bet,double odds) {
	this->money = money;
	this->bet = bet;
	this->odds = odds;
}

void Game::play() {
	long long money, bet;
	double odds;

	cout << "歡迎來到21點" << endl;
	cout << "請輸入賭資：" << endl;
	cin >> money;
	system("cls");

	cout << "請選擇賠率(1.2, 1.5, 3.0):" << endl;
	cin >> odds;
	while (odds != 1.2 || odds != 1.5 || odds != 3.0) {
		if (odds == 1.2 || odds == 1.5 || odds == 3.0) {
			break;
		}
		system("cls");
		cout << "賠率不正確，請重新選擇賠率(1.2, 1.5, 3.0):" << endl;
		cin >> odds;
	}
	system("cls");

	cout << "請輸入賭金：" << endl;
	cin >> bet;
	while (bet>money) {
		system("cls");
		cout << "賭資不足，請重新輸入賭金：" << endl;
		cin >> bet;
	}
	system("cls");

	setMoney(money);
	setOdds(odds);
	setBet(bet);
}

void Game::reset() {//重置卡牌
	Pgot = 0;
	Dgot = 0;
	cardUsed = 0;
	Deck deck;
	this->deck = deck;
}

void Game::prepareRound() {
	for (int i = 0; i < 2; i++) {
		deck.giveDCard(Dgot, cardUsed);
		Dgot++;
		cardUsed++;

		deck.givePCard(Pgot, cardUsed);
		Pgot++;
		cardUsed++;
	}
}

void Game::Shuffle() {
	for (int i = 0; i < 3; i++) {
		cout << "洗牌中......" << 3 - i << endl << endl;
		sleep_for(chrono::milliseconds(1000));
	}

	deck.Shuffle();

	cout << "完成";
	sleep_for(chrono::milliseconds(1000));
	system("cls");
}

void Game::playerRound() {
	cout << "莊家的明牌:" << endl;
	deck.getDealer()->print();
	cout << endl;

	cout << "你目前的手牌:" << endl;
	for (int i = 0; i < Pgot; i++) {
		(deck.getPlayer() + i)->print();
	}
	cout << endl;
	
	string ans = "Y";
	while (ans == "Y" && Pgot != 5) {
		cout << "是否需要取得新卡片(Y/N):" << endl;
		cin >> ans;
		system("cls");

		while (ans != "Y" && ans != "N") {
			system("cls");

			cout << "莊家的明牌:" << endl;
			deck.getDealer()->print();
			cout << endl;

			cout << "你目前的手牌:" << endl;
			for (int i = 0; i < Pgot; i++) {
				(deck.getPlayer() + i)->print();
			}
			cout << endl;
			cout << "是否需要取得新卡片(Y/N):" << endl;
			cin >> ans;

			if (ans == "Y") {
				continue;
			}
			else if (ans == "N") {
				break;
			}
		}

		if (ans == "Y") {
			deck.givePCard(Pgot, cardUsed);
			Pgot++;
			cardUsed++;
		}
		else if (ans == "N") {
			break;
		}
	}
}

void Game::dealerRound() {

}

void Game::win() {
	money += bet * odds;
}

void Game::lose() {
	money -= bet * odds;

	if (money <= 0) {
		cout << "賭資歸零，遊戲結束"<<endl;

	}
}

void Game::setMoney(long long money) {
	this->money = money;
}

void Game::setBet(long long bet) {
	this->bet = bet;
}

void Game::setOdds(double odds) {
	this->odds = odds;
}

long long Game::getMoney()const {
	return money;
}

long long Game::getBet()const {
	return bet;
}

double Game::getOdds()const {
	return odds;
}