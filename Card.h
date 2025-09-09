//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_CARD_H
#define M1OEP_GTMONTEI_CARD_H

#include <iostream>
using namespace std;

class Card {
public:
    Card();
    card(string suit,string rank);
private:
    string suit;
    string rank;

};
#endif //M1OEP_GTMONTEI_CARD_H