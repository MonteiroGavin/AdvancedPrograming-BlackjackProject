//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_DECK_H
#define M1OEP_GTMONTEI_DECK_H

#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;

class Deck {
public:
    /*
    * Default Constructor
    * Requires: Nothing
    * Modifies: deck vector
    * Effects: Pushes every card into the deck
    */
    Deck();

    /*
    * Deck shuffle
    * Requires: Nothing
    * Modifies: Deck
    * Effects: Suffles cards in deck to a random order
    */
    void shuffle();

    /*
    * Draw card
    * Requires: nothing
    * Modifies: Deck
    * Effects: Pops top card off the deck and returns it
    */
    Card drawCard();

private:
    // Using a vector as a stack of cards to push and pop cards off the top
    vector<Card> deck;
};

#endif //M1OEP_GTMONTEI_DECK_H