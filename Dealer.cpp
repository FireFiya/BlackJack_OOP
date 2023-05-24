//BlackJack(OOP) 0.1.4 - Dealer.cpp
#include "Dealer.h"
int Dealer::numOfCards = 0;
int Dealer::getPoint()const {
	return point;
}
Card Dealer::getCard()const {
	return card;
}