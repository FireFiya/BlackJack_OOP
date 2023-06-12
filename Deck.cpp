//BlackJack(OOP) 1.1.0 - Deck.cpp
#include "Deck.h"

Deck::Deck() {
    setCards(createDeck());
}

void Deck::Shuffle() {
    srand(time(0));

    for (int i = 0; i < 1000; ++i) {
        int j = rand() % DECK_SIZE;
        swapByReference(cards[i % DECK_SIZE], cards[j]);
    }
}

void Deck::swapByReference(Card& card1, Card& card2) {
    Card temp = card1;
    card1 = card2;
    card2 = temp;
}

Card* Deck::createDeck() {
    Card* deck = new Card[DECK_SIZE];
    player = new Card[5];
    dealer = new Card[5];

    for (int i = 1; i < 14; i++) {
        for (int j = 1; j < 5; j++) {
            deck[(i - 1) * 4 + (j - 1)] = i * 1.0 + j * 0.1;
        }
    }

    return deck;
}

Card* Deck::getPlayer() {
    return player;
}

Card* Deck::getDealer() {
    return dealer;
}

void Deck::givePCard(int pos, int c) {
    player[pos] = cards[c];
}

void Deck::giveDCard(int pos, int c) {
    dealer[pos] = cards[c];
}


void Deck::setPlayer(Card* player) {
    this->player = player;
}

void Deck::setDealer(Card* dealer) {
    this->dealer = dealer;
}

void Deck::setCards(Card* cards) {
    this->cards = cards;
}