//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_BLACKJACK_H
#define M1OEP_GTMONTEI_BLACKJACK_H

#include <iostream>
#include "Card.h"
#include "Dealer.h"
#include "Player.h"
#include "Deck.h"
using namespace std;

class Blackjack {
public:
    Blackjack(Player& player1, Dealer& dealer);

    void startRound();
    bool checkBlackJack(const vector<Card>& hand);
    void playerTurn(vector<Card> hand);
    void dealerTurn(vector<Card> hand);

    private:
    Deck deck;
    Player player;
    Dealer dealer;

};

#endif //M1OEP_GTMONTEI_BLACKJACK_H