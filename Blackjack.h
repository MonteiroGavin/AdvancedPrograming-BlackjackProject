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
    Blackjack(Player player1, Dealer dealer);

    Card checkBlackJack(vector<Card> hand);
    Card playerTurn(vector<Card> hand);
    Card dealerTurn(vector<Card> hand);

    private:
    Deck deck;
    Player player;
    Dealer dealer;

    vector<Card> playerHand;
    vector<Card> dealerHand;

};

#endif //M1OEP_GTMONTEI_BLACKJACK_H