//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_DEALER_H
#define M1OEP_GTMONTEI_DEALER_H

#include <iostream>
#include <vector>
#include "Card.h"
#include "Deck.h"

using namespace std;

class Dealer {
public:
    Dealer();

    void setHand(Card card1, Card card2);

    vector<Card> getHand() const;

    void addCard(Card card);
    int getHandValue() const;
    bool hasBlackjack() const;

    void dealerTurn(Deck& deck);

    void printHand(bool hiddenCard) const;

private:
    vector<Card> hand;
    bool hiddenCard;

};
#endif //M1OEP_GTMONTEI_DEALER_H