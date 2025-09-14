//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_CARD_H
#define M1OEP_GTMONTEI_CARD_H

#include <iostream>
using namespace std;

// Enumerated types for card suit and rank
enum class Suit { Clubs, Diamonds, Hearts, Spades };
enum class Rank { Two=2, Three=3, Four=4, Five=5,
                Six=6, Seven=7, Eight=8, Nine=9, Ten=10,
                Jack=11, Queen=12, King=13, Ace=14 };

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
    Card(Suit suit,Rank rank);

    /*
    * Gets the card suit
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns suit value
    */
    Suit getSuit() const;

    /*
    * Gets the card rank
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns rank
    */
    Rank getRank() const;

    /*
   * Gets the card rank value
   * Requires: Nothing
   * Modifies: Nothing
   * Effects: Returns rank value
   */
    int getValue() const;

     /*
    * Checks if a card is an ace, used for 11 or 1 value rule for blackjack
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: true if card rank is ace
    */
    bool isAce() const;

private:
    Suit suit;
    Rank rank;
};

// Overloaded operator for printing card
ostream& operator<<(ostream& os, const Card& card);
#endif //M1OEP_GTMONTEI_CARD_H