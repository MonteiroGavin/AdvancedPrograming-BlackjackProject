//
// Created by Gavin  Monteiro on 9/9/25.
//

#include "Deck.h"
#include "Card.h"

/************* Deck class ******************/

Deck::Deck() {
    // For every suit (clubs, spades, diamonds, hearts)
    for (int i = 0; i < 4; i++) {
        // For every card rank
        for (int j = 0; j < 13; j++) {
            // Set suit to current suit i
            deck[i * 13 + j].setSuit(suits[i]);

            // Set rank to current rank j
            deck[i * 13 + j].setRank(ranks[j]);
        }
    }
}

void shuffle(Deck& deck) {
    for (int i = 0; i < 52; i++) {

    }

}


