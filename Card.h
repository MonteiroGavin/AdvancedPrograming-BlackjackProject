//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_CARD_H
#define M1OEP_GTMONTEI_CARD_H

#include <iostream>
using namespace std;

class Card {
public:
    /*
     * Default Constructor
     * Requires: Nothing
     * Modifies: Suit and rank
     * Effects: sets card suit to "hearts" and rank to "Ace"
     */
    Card();

    /*
     * Default Constructor
     * Requires: Suit and rank
     * Modifies: Suit and rank
     * Effects: Sets card suit and rank
     */
    Card(string suit,string rank);

    /*
    * Sets card suit
    * Requires: String suit
    * Modifies: Suit
    * Effects: Sets card suit to the given string
    */
    void setSuit(string suit);

    /*
    * Default Constructor
    * Requires: String rank
    * Modifies: Rank
    * Effects: Sets card rank to the given string
    */
    void setRank(string rank);

    /*
    * Gets the card suit
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns suit value
    */
    string getSuit();

    /*
    * Gets the card rank
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns rank value
    */
    string getRank();

    /*
    * Print Card
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Prints the card
    */
    void printCard();

private:
    string suit;
    string rank;
};
#endif //M1OEP_GTMONTEI_CARD_H