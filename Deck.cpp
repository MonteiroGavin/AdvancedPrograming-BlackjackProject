//
// Created by Gavin  Monteiro on 9/9/25.
//

#include "Deck.h"
#include "Card.h"

/************* Deck class ******************/

Deck::Deck() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck[i * 13 + j].setSuit(suits[i]);
            deck[i * 13 + j].setRank(ranks[i]);
        }
    }

}

Deck::~Deck() {

}

void shuffle(Deck& deck) {

}


