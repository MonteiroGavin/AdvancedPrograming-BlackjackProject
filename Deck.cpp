//
// Created by Gavin  Monteiro on 9/9/25.
//

#include "Deck.h"
#include <random>
using namespace std;

/************* Deck class ******************/

Deck::Deck() {
    // For every suit (clubs, spades, diamonds, hearts)
    for (int i = 0; i < 4; i++) {
        Suit suit = static_cast<Suit>(i);

        deck.push_back(Card(suit, Rank::Ace));
        deck.push_back(Card(suit, Rank::Two));
        deck.push_back(Card(suit, Rank::Three));
        deck.push_back(Card(suit, Rank::Four));
        deck.push_back(Card(suit, Rank::Five));
        deck.push_back(Card(suit, Rank::Six));
        deck.push_back(Card(suit, Rank::Seven));
        deck.push_back(Card(suit, Rank::Eight));
        deck.push_back(Card(suit, Rank::Nine));
        deck.push_back(Card(suit, Rank::Ten));
        deck.push_back(Card(suit, Rank::Jack));
        deck.push_back(Card(suit, Rank::Queen));
        deck.push_back(Card(suit, Rank::King));
    }
}

int Deck::size() {
    return static_cast<int>(deck.size());
}

void Deck::shuffle() {
    // Using shuffle() function built into C++, used geeksforgeeks for help on this
    std::mt19937 rng(static_cast<unsigned int>(time(nullptr)));
    std::shuffle(deck.begin(), deck.end(), rng);
}

Card Deck::drawCard() {
    // Finds the top card
    Card c = deck.back();
    // Pops top card off stack
    deck.pop_back();
    return c;

    /* I could have added an error if the stack is empty but
     * the deck is reshuffling after every round so the stack
     * will never reach the bottom.
     */
}


