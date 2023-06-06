//BlackJack(OOP) 0.4.0 - Game.cpp
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

void Game::restart() {//全部重來

}

void Game::reset() {//重置卡牌
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
	deck.Shuffle();
}

void Game::playerRound() {

}

void Game::dealerRound() {

}

void Game::win() {

}

void Game::lose() {

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