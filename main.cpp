//BlackJack(OOP) 0.2.0 - main.cpp
#include<iostream>
#include "Game.h"
using namespace std;
int main() {
	int money, bet;
	double odds;
	cout << "�w��Ө�21�I" << endl;
	cout << "�п�J���G" << endl;
	cin >> money;
	Game game(money);
	cout << "�п�߲ܽv:(1.2, 1.5, 3.0)" << endl;
	cin >> odds;
	cout << "�п�J����G" << endl;
	cin >> bet;
}