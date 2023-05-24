//BlackJack(OOP) 0.2.0 - Game.cpp
#include "Game.h"
Game::Game(int money) {
	this->money = money;
}
void Game::play() {

}
void Game::restart() {

}
void Game::reset() {

}
void Game::roundOutPut()const {

}
void Game::status()const {

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