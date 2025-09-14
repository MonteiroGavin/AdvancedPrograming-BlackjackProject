//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_BLACKJACK_H
#define M1OEP_GTMONTEI_BLACKJACK_H

#include <iostream>
#include "Dealer.h"
#include "Player.h"
#include "Deck.h"
using namespace std;

class Blackjack {
public:
    /*
    * Blackjack constructor
    * Requires: Player player1 and Dealer dealer both by reference
    * Modifies: Nothing
    * Effects: Initializes player and dealer
    */
    Blackjack(Player& player1, Dealer& dealer);

    /*
    * Initial deal and first steps of game
    * Requires: Nothing
    * Modifies: Player and dealer's hands
    * Effects: Shuffles deck and deals out two cards each and Checks for a blackjack for both.
    */
    void initialDeal();

    /*
    * Player hits
    * Requires: Nothing
    * Modifies: Player's hand
    * Effects: Draws card and adds it to player's hand, then prints hand
    */
    void playerHit();

    /*
    * Dealer's turn
    * Requires: Nothing
    * Modifies: Dealer's hand
    * Effects: runs dealerTurn() from dealer class
    */
    void dealerTurn();

    /*
    * Compare two hands
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Compares two hands to determine winner
    */
    void compareHands();

    private:
    Deck deck;
    Player& player;
    Dealer& dealer;
};

#endif //M1OEP_GTMONTEI_BLACKJACK_H