//
// Created by Gavin  Monteiro on 9/9/25.
//
#include "Dealer.h"

/************* Dealer class ******************/

Dealer::Dealer() {
}

void Dealer::setHand(Card card1, Card card2) {
    // In case anything is in the hand, clears it
    hand.clear();
    // Adds first card
    hand.push_back(card1);
    // Adds second card
    hand.push_back(card2);
}

vector<Card> Dealer::getHand(){
    return hand;
}

void Dealer::addCard(Card card) {
    // Adds new card to hand vector
    hand.push_back(card);
}