//BlackJack(OOP) 0.3.3 - Game.cpp
#include "Game.h"

int Game::cardUsed = 0;

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

	cout << "�w��Ө�21�I" << endl;
	cout << "�п�J���G" << endl;
	cin >> money;
	sleep_for(chrono::milliseconds(1000));
	system("cls");

	cout << "�п�߲ܽv(1.2, 1.5, 3.0):" << endl;
	cin >> odds;
	while (odds != 1.2 || odds != 1.5 || odds != 3.0) {
		if (odds == 1.2 || odds == 1.5 || odds == 3.0) {
			break;
		}
		sleep_for(chrono::milliseconds(1000));
		system("cls");
		cout << "�߲v�����T�A�Э��s��߲ܽv(1.2, 1.5, 3.0):" << endl;
		cin >> odds;
	}
	sleep_for(chrono::milliseconds(1000));
	system("cls");

	cout << "�п�J����G" << endl;
	cin >> bet;
	while (bet>money) {
		sleep_for(chrono::milliseconds(1000));
		system("cls");
		cout << "��ꤣ���A�Э��s��J����G" << endl;
		cin >> bet;
	}
	sleep_for(chrono::milliseconds(1000));
	system("cls");

	setMoney(money);
	setOdds(odds);
	setBet(bet);
}

void Game::restart() {//��������

}

void Game::reset() {//���m�d�P

}

void Game::statusOutput()const {

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