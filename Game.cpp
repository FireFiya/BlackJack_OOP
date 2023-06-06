//BlackJack(OOP) 1.0.1 - Game.cpp
#include "Game.h"

int Game::cardUsed = 0;
int Game::Pgot = 0;
int Game::Dgot = 0;

Game::Game() {
	this->bet = 0;
	this->odds = 0;
}

Game::Game(int bet,double odds) {
	this->bet = bet;
	this->odds = odds;
}

void Game::play() {
	long long bet;
	double odds;

	cout << "歡迎來到21點" << endl;

	cout << "你擁有" << money << "賭資" << endl;

	cout << "請選擇賠率(1.2, 1.5, 3.0):" << endl;
	cin >> odds;
	while (odds != 1.2 || odds != 1.5 || odds != 3.0) {
		if (odds == 1.2 || odds == 1.5 || odds == 3.0) {
			break;
		}
		system("cls");
		cout << "你擁有" << money << "賭資" << endl;
		cout << "賠率不正確，請重新選擇賠率(1.2, 1.5, 3.0):" << endl;
		cin >> odds;
	}
	system("cls");

	cout << "你擁有" << money << "賭資" << endl;

	cout << "請輸入賭金：" << endl;
	cin >> bet;
	while (bet > money) {
		system("cls");
		cout << "賭資不足，請重新輸入賭金：" << endl;
		cin >> bet;
	}
	system("cls");

	setOdds(odds);
	setBet(bet);
}

void Game::reRound() {
	Pgot = 0;
	Dgot = 0;
	cardUsed = 0;
	Deck deck;
	this->deck = deck;
}

void Game::reset() {//重置
	setMoney(1000000);
	setBet(0);
	setOdds(0);
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
		cout << "洗牌中......" << 3 - i << endl;
		sleep_for(chrono::milliseconds(1000));
	}

	deck.Shuffle();

	cout << "完成";
	sleep_for(chrono::milliseconds(1000));
	system("cls");
}

void Game::playerRound() {
	string ans = "Y";

	while (ans == "Y" && Pgot != 5 && getPPoint() < 21) {
		cout << "莊家的明牌:" << endl;
		(deck.getDealer() + 1)->print();
		cout << endl;

		cout << "你目前的手牌:" << endl;
		for (int i = 0; i < Pgot; i++) {
			(deck.getPlayer() + i)->print();
		}
		cout << endl <<"當前點數: " << getPPoint() << endl << endl;

		cout << "是否需要取得新卡片(Y/N):" << endl;
		cin >> ans;
		system("cls");

		if (ans == "Y") {
			deck.givePCard(Pgot, cardUsed);
			Pgot++;
			cardUsed++;
		}
		else if (ans == "N") {
			break;
		}
		else {
			ans = "Y";
		}
	}
	cout << "莊家的明牌:" << endl;
	(deck.getDealer() + 1)->print();
	cout << endl;

	cout << "你目前的手牌:" << endl;
	for (int i = 0; i < Pgot; i++) {
		(deck.getPlayer() + i)->print();
	}

	cout << endl << "當前點數: " << getPPoint() << endl << endl;
	system("cls");
}

void Game::dealerRound() {
	cout << "莊家目前的手牌:" << endl;
	for (int i = 0; i < Dgot; i++) {
		(deck.getDealer() + i)->print();
	}
	cout << endl << "莊家的點數: " << getDPoint() << endl << endl << endl;

	cout << "你的手牌:" << endl;
	for (int i = 0; i < Pgot; i++) {
		(deck.getPlayer() + i)->print();
	}
	cout << endl << "你的點數: " << getPPoint() << endl << endl;
	system("pause");
	system("cls");

	if (getPPoint() >= 21) {
		while (getDPoint() < 17 && Dgot != 5) {
			deck.giveDCard(Dgot, cardUsed);
			Dgot++;
			cardUsed++;

			cout << "莊家目前的手牌:" << endl;
			for (int i = 0; i < Dgot; i++) {
				(deck.getDealer() + i)->print();
			}
			cout << endl << "莊家的點數: " << getDPoint() << endl << endl;

			cout << "你的手牌:" << endl;
			for (int i = 0; i < Pgot; i++) {
				(deck.getPlayer() + i)->print();
			}
			cout << endl << "你的點數: " << getPPoint() << endl << endl;
			system("pause");
			system("cls");
		}
	}
	else if (getPPoint() < 21) {
		while (getPPoint() > getDPoint() && Dgot != 5 || getDPoint() < 17) {
			deck.giveDCard(Dgot, cardUsed);
			Dgot++;
			cardUsed++;

			cout << "莊家目前的手牌:" << endl;
			for (int i = 0; i < Dgot; i++) {
				(deck.getDealer() + i)->print();
			}
			cout << endl << "莊家的點數: " << getDPoint() << endl << endl;

			cout << "你的手牌:" << endl;
			for (int i = 0; i < Pgot; i++) {
				(deck.getPlayer() + i)->print();
			}
			cout << endl << "你的點數: " << getPPoint() << endl << endl;
			system("pause");
			system("cls");
		}
	}

	cout << "莊家目前的手牌:" << endl;
	for (int i = 0; i < Dgot; i++) {
		(deck.getDealer() + i)->print();
	}
	cout << endl << "莊家的點數: " << getDPoint() << endl << endl;

	cout << "你的手牌:" << endl;
	for (int i = 0; i < Pgot; i++) {
		(deck.getPlayer() + i)->print();
	}
	cout << endl << "你的點數: " << getPPoint() << endl << endl;
	system("pause");
	system("cls");
}

int Game::getPPoint() {
	int total = 0;
	int special = 0;
	for (int i = 0; i < Pgot; i++) {
		if ((deck.getPlayer() + i)->getSymbol() == "A") {
			total += 11;
			special++;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "2") {
			total += 2;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "3") {
			total += 3;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "4") {
			total += 4;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "5") {
			total += 5;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "6") {
			total += 6;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "7") {
			total += 7;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "8") {
			total += 8;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "9") {
			total += 9;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "10") {
			total += 10;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "J") {
			total += 10;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "Q") {
			total += 10;
		}
		else if ((deck.getPlayer() + i)->getSymbol() == "K") {
			total += 10;
		}

		for (int i = 0; i < special; i++) {
			if (total > 21) {
				total -= 10;
			}
		}
	}
	return total;
}

int Game::getDPoint() {
	int total = 0;
	int special = 0;
	for (int i = 0; i < Dgot; i++) {
		if ((deck.getDealer() + i)->getSymbol() == "A") {
			total += 11;
			special++;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "2") {
			total += 2;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "3") {
			total += 3;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "4") {
			total += 4;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "5") {
			total += 5;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "6") {
			total += 6;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "7") {
			total += 7;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "8") {
			total += 8;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "9") {
			total += 9;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "10") {
			total += 10;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "J") {
			total += 10;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "Q") {
			total += 10;
		}
		else if ((deck.getDealer() + i)->getSymbol() == "K") {
			total += 10;
		}

		for (int i = 0; i < special; i++) {
			if (total > 21) {
				total -= 10;
			}
		}
	}
	return total;
}

void Game::compare() {
	if (getPPoint() <= 21 && getDPoint() <= 21) {
		if (getPPoint() > getDPoint()) {
			cout << "玩家點數大於莊家 玩家勝利" << endl;
			win();
		}
		else if (getPPoint() < getDPoint()) {
			cout << "莊家點數大於玩家 莊家勝利" << endl;
			lose();
		}
		else if (getPPoint() == getDPoint()) {
			cout << "玩家點數等於莊家 和局" << endl;
			tie();
		}
	}
	else if (getPPoint() > 21 && getDPoint() <= 21) {
		cout << "玩家爆牌 莊家勝利" << endl;
		lose();
	}
	else if (getPPoint() <= 21 && getDPoint() > 21) {
		cout << "莊家爆牌 玩家勝利" << endl;
		win();
	}
	else if (getPPoint() > 21 && getDPoint() > 21) {
		cout << "雙方爆牌 和局" << endl;
		tie();
	}
}

void Game::win() {
	cout << money << "->";
	money += bet * odds;
	cout << money << endl;
	system("pause");
}

void Game::tie() {
	cout << money << "->" << money << endl;
	system("pause");
}

void Game::lose() {
	cout << money << "->";
	money -= bet;
	cout << money << endl;
	system("pause");
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