//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_PLAYER_H
#define M1OEP_GTMONTEI_PLAYER_H

#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;

class Player {
    public:

    /*
    * Player default constructor
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: sets playerName to default "John"
    */
    Player();

    /*
    * Player name setter
    * Requires: Nothing
    * Modifies: string name by reference
    * Effects: Sets playerName to name
    */
    void setName(const string& name);

    /*
    * Sets player's hand
    * Requires: 2 cards by reference
    * Modifies: Hand vector
    * Effects: Players's hand now has the two cards in it
    */
    void setHand(Card card1, Card card2);

    /*
    * set money to player's money
    * Requires: Float money
    * Modifies: set new money to player's money
    * Effects: Returns nothing
    */
    void setMoney(double amount);

    /*
    * Clears player's hand
    * Requires: Nothing
    * Modifies: Hand vector
    * Effects: Returns nothing, clears hand
    */
    void clearHand();

    /*
    * Gets player's name
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns playerName
    */
    string getName() const;

    /*
    * Gets the player's hand
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns player's hand
    */
    vector<Card> getHand() const;

    /*
    * Gives the Players money
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns money
    */
    double getMoney() const;

    /*
    * Adds money to the players funds
    * Requires: double ammount
    * Modifies: money
    * Effects: adds an amount to money, can be positive or negative
    */
    void addMoney(double amount);

    /*
    * Adds a card to player's hand
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
    * Checker for player having blackjack
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns true if player has blackjack
    */
    bool hasBlackjack() const;

    /*
    * Checker for player going bust
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns true if player has gone bust
    */
    bool bust() const;

    /*
    * Print hand
    * Requires: Bool hiddenCard
    * Modifies: Nothing
    * Effects: Prints player's hand
    */
    void printHand() const;

    private:
    string playerName;
    vector<Card> hand;
    double money;

};

#endif //M1OEP_GTMONTEI_PLAYER_H