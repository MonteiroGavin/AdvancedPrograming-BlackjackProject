//
// Created by Gavin  Monteiro on 9/9/25.
//

#include "Card.h"


Card::Card() {
    suit = "hearts";
    rank = "Ace";
}

Card::Card(string suit, string rank) {
    this->suit = suit;
    this->rank = rank;
}

void Card::setSuit(string suit) { this->suit = suit; }
void Card::setRank(string rank) { this->rank = rank; }

string Card::getSuit() const { return suit; }
string Card::getRank() const { return rank; }

void Card::printCard() const {
    cout << suit << " of " << rank;
}

