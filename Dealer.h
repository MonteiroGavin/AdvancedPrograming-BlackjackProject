//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef ADVANCEDPROGRAMMING_BLACKJACKPROJECT_DEALER_H
#define ADVANCEDPROGRAMMING_BLACKJACKPROJECT_DEALER_H

#include <iostream>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Player.h"

using namespace std;

class Dealer : public Player {
public:
    /*
    * Dealer constructor
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: empty constructor
    */
    Dealer();

    /*
    * Dealer's turn
    * Requires: Deck by reference
    * Modifies: Nothing
    * Effects: If getHandValue() is less than 17, dealer hits until over 17
    */
    void dealerTurn(Deck& deck);

    /*
    * Prints dealer's hand
    * Requires: Bool hiddenCard
    * Modifies: Nothing
    * Effects: Prints hand with hidden card if it is the first round,
    * prints full hand otherwise
    */
    void printHand(bool hiddenCard) const;

private:
    bool hiddenCard;

};
#endif //ADVANCEDPROGRAMMING_BLACKJACKPROJECT_DEALER_H