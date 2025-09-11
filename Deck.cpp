//
// Created by Gavin  Monteiro on 9/9/25.
//

#include "Deck.h"
#include <random>
using namespace std;

/************* Deck class ******************/

Deck::Deck() {
    // For every suit (clubs, spades, diamonds, hearts)
    for (int i = 0; i < 4; i++) {
        // For every card rank
        for (int j = 0; j < 13; j++) {
            Card c;
            c.setSuit(suits[i]);
            c.setRank(ranks[j]);
            deck.push_back(c);
        }
    }
}

void Deck::shuffle() {
    // Using shuffle() function built into C++, used geeksforgeeks for help on this
    std::mt19937 rng(static_cast<unsigned int>(time(nullptr)));
    std::shuffle(deck.begin(), deck.end(), std::mt19937());
}

Card Deck::drawCard() {
    // Finds the top card
    Card c = deck.back();
    // Pops top card off stack
    deck.pop_back();
    return c;

    /* I could have added an error if the stack is empty but
     * the deck is reshuffling after every round so the stack
     * will never reach the bottom.
     */
}


