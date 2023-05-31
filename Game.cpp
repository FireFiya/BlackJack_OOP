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
	cout << "歡迎來到21點" << endl;
	cout << "請輸入賭資：" << endl;
	cin >> money;
	cout << "請選擇賠率(1.2, 1.5, 3.0):" << endl;
	cin >> odds;
	while (odds != 1.2 || odds != 1.5 || odds != 3.0) {
		cout << "賠率不正確，請重新選擇賠率(1.2, 1.5, 3.0):" << endl;
		cin >> odds;
		if (odds == 1.2 || odds == 1.5 || odds == 3.0) {
			break;
		}
	}
	cout << "請輸入賭金：" << endl;
	cin >> bet;
	while (bet>money) {
		cout << "賭資不足，請重新輸入賭金：" << endl;
		cin >> bet;
	}
	setMoney(money);
	setOdds(odds);
	setBet(bet);
}
void Game::restart() {//全部重來

}
void Game::reset() {//重置卡牌

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