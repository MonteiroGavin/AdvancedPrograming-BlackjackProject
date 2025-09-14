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
    /*
    * Dealer constructor
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: empty constructor
    */
    Dealer();

    /*
    * Sets dealers hand
    * Requires: 2 cards by reference
    * Modifies: Hand vector
    * Effects: Dealer's hand now has the two cards in it
    */
    void setHand(Card card1, Card card2);

    /*
    * Clears dealer's hand
    * Requires: Nothing
    * Modifies: Hand vector
    * Effects: Returns nothing, clears hand
    */
    void clearHand();

    /*
    * Gets the dealer's hand
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns dealer's hand
    */
    vector<Card> getHand() const;

    /*
    * Adds a card to dealer's hand
    * Requires: Card
    * Modifies: Adds card to hand vector
    * Effects: Returns nothing
    */
    void addCard(Card card);

    /*
    * Adds up all the card ranks in the hand
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns sum int
    */
    int getHandValue() const;

    /*
    * Checker for dealer having blackjack
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns true if dealer has blackjack
    */
    bool hasBlackjack() const;

    /*
    * Checker for dealer going bust
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns true if dealer has gone bust
    */
    bool bust() const;

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
    vector<Card> hand;
    bool hiddenCard;

};
#endif //M1OEP_GTMONTEI_DEALER_H