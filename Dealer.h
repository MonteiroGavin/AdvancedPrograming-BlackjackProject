//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_DEALER_H
#define M1OEP_GTMONTEI_DEALER_H

#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;

class Dealer {
public:
    Dealer();

    void setHand(Card card1, Card card2);

    vector<Card> getHand();

    void addCard(Card card);

private:
    vector<Card> hand;

};
#endif //M1OEP_GTMONTEI_DEALER_H