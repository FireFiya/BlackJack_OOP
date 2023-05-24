//BlackJack(OOP) 0.2.1 - Deck.cpp
#include "Deck.h"
void Deck::Shuffle(int r) {
    srand(r);
    for (int i = 0; i < DECK_SIZE; ++i) {
        int j = rand() % DECK_SIZE;
        swapByReference(cards[i], cards[j]);
    }
}
void Deck::swapByReference(Card& card1, Card& card2) {
    Card temp = card1;
    card1 = card2;
    card2 = temp;
}
Card* Deck::createDeck() {
    Card* deck = new Card[DECK_SIZE];
    for (int i = 1; i < 14; i++) {
        for (int j = 1; j < 5; j++) {
            deck[(i - 1) * 4 + (j - 1)] = i * 1.0 + j * 0.1;
        }
    }
    return deck;
}
void Deck::distribute() {
    
}
Card* Deck::getPlayer() {
    return player;
}
Card* Deck::getDealer() {
    return dealer;
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