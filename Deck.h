//BlackJack(OOP) 0.3.0 - Deck.h
#ifndef D_H
#define D_H
#include "Card.h"
class Deck {
public:
    void Shuffle(int);
    void swapByReference(Card&, Card&);
    Card* createDeck();
    Card* getPlayer();
    Card* getDealer();
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