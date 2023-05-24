//BlackJack(OOP) 0.2.1 - main.cpp
#include<iostream>
#include "Game.h"
using namespace std;
int main() {
	int money, bet;
	double odds;
	cout << "歡迎來到21點" << endl;
	cout << "請輸入賭資：" << endl;
	cin >> money;
	cout << "請選擇賠率:(1.2, 1.5, 3.0)" << endl;
	cin >> odds;
	cout << "請輸入賭金：" << endl;
	cin >> bet;
	Game game(money, bet, odds);
}