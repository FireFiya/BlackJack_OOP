//BlackJack(OOP) 0.3.3 - Card.h
#ifndef C_H
#define C_H
#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include<chrono>
#include<thread>
using namespace std;
using this_thread::sleep_for;
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
    vector<string> St = { "����", "���", "�R��", "�®�" };
    vector<string> Sl = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
    double card;
};
#endif