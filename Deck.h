//BlackJack(OOP) 0.5.1 - Deck.h
#ifndef D_H
#define D_H
#include "Card.h"
class Deck {
public:
    Deck();
    void Shuffle();
    void swapByReference(Card&, Card&);
    Card* createDeck();
    Card* getPlayer();
    Card* getDealer();
    void givePCard(int, int);
    void giveDCard(int, int);
    void setPlayer(Card*);
    void setDealer(Card*);
    void setCards(Card*);
private:
    static const int DECK_SIZE = 52;
    Card* player;
    Card* dealer;
    Card* cards;
};
#endif