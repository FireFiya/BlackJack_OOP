//BlackJack(OOP) 0.1.4 - Card.h
#ifndef C_H
#define C_H
#include<iostream>
#include<ctime>
#include<string>
using namespace std;
class Card {
public:
	
private:
	static int count;	//抽牌次數計算
	static int allcards[52];	//牌組
	int cardhold[5];	//手牌
};
#endif