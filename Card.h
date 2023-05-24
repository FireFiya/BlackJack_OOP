//BlackJack(OOP) 0.2.1 - Card.h
#ifndef C_H
#define C_H
#include<iostream>
#include<vector>
#include<string>
#include<ctime>
using namespace std;
class Card {
public:
    Card();
    Card(double);
    string getSuit()const;
    string getSymbol()const;
    void print()const; 
    void setCard(double);
    double getCard()const;
private:
    vector<string> St = { "Club", "Diamond", "Heart", "Spade" };
    vector<string> Sl = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
    double card;
};
#endif