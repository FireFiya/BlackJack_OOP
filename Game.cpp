//BlackJack(OOP) 0.3.0 - Game.cpp
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
	cout << "�п�߲ܽv(1.2, 1.5, 3.0):" << endl;
	cin >> odds;
	while (odds != 1.2 || odds != 1.5 || odds != 3.0) {
		cout << "�߲v�����T�A�Э��s��߲ܽv(1.2, 1.5, 3.0):" << endl;
		cin >> odds;
		if (odds == 1.2 || odds == 1.5 || odds == 3.0) {
			break;
		}
	}
	cout << "�п�J����G" << endl;
	cin >> bet;
	while (bet>money) {
		cout << "��ꤣ���A�Э��s��J����G" << endl;
		cin >> bet;
	}
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
void Game::setMoney(int money) {
	this->money = money;
}
void Game::setBet(int bet) {
	this->bet = bet;
}
void Game::setOdds(double odds) {
	this->odds = odds;
}
int Game::getMoney()const {
	return money;
}
int Game::getBet()const {
	return bet;
}
double Game::getOdds()const {
	return odds;
}