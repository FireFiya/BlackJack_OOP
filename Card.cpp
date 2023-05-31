//BlackJack(OOP) 0.3.0 - Card.h
#include "Card.h"
Card::Card() {
	this->card = 0;
}
Card::Card(double card) {
	this->card = card;
}
string Card::getSuit()const {
	return St[(card - int(card)) * 10 - 1];
}
string Card::getSymbol()const {
	return Sl[int(card) - 1];
}
void Card::print()const {
	cout << "Symbol: " << getSymbol() << endl << "Suit: " << getSuit() << endl;
}
void Card::setCard(double card) {
	this->card = card;
}
double Card::getCard()const {
	return card;
}