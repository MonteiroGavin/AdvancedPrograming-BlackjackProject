//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_DECK_H
#define M1OEP_GTMONTEI_DECK_H

#include <iostream>
#include "Card.h"
using namespace std;

class Deck {
public:
    // Default Constructor
    Deck();
    ~Deck();

    void shuffle(Deck& Deck);
    Card drawCard();
private:
    Card deck[52];
    const string suits[4] = { "clubs", "spades", "diamonds", "hearts" };
    const string ranks[13] = { "Ace", "3", "4", "5", "6", "7", "8", "9",
                        "10", "Jack", "Queen", "King" };

};

#endif //M1OEP_GTMONTEI_DECK_H