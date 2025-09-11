//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_PLAYER_H
#define M1OEP_GTMONTEI_PLAYER_H

#include <iostream>
#include "Card.h"
using namespace std;

class Player {
    public:
    Player();

    void setName(string name);
    void setHand(Card card1, Card card2);

    string getName();
    Card getHand();

    Card addCard(Card card);

    private:
    string playername;
    vector<Card> hand;

};

#endif //M1OEP_GTMONTEI_PLAYER_H