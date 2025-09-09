//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_DECK_H
#define M1OEP_GTMONTEI_DECK_H

#include <iostream>
using namespace std;

class Deck {
    public:
        // Default Constructor
        Deck();

        ~Deck();

        void shuffle();
        string drawCard();

};

#endif //M1OEP_GTMONTEI_DECK_H