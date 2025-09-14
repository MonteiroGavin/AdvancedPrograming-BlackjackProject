//
// Created by Gavin  Monteiro on 9/9/25.
//

#include "Card.h"

/************* Card class ******************/

Card::Card() {
    rank = Rank::Ace;
    suit = Suit::Clubs;
}


Card::Card(Suit suit, Rank rank) {
    this->rank = rank;
    this->suit = suit;
}

Rank Card::getRank() const {
    return rank;
}
Suit Card::getSuit() const {
    return suit;
}

int Card::getValue() const{
    switch (rank) {
        case Rank::Jack: return 10;
        case Rank::Queen: return 10;
        case Rank::King: return 10;
        case Rank::Ace: return 11;
        // Clion autofilled this next line, but it does every switch not listed above
        default: return static_cast<int>(rank);
    }
}

bool Card::isAce() const {
    return rank == Rank::Ace;
}

// Switches from Rank and Suit into string versions for printing
ostream& operator<<(ostream& os, const Card& card) {
    string rankStr;
    switch (card.getRank()) {
        case Rank::Two: rankStr = "Two"; break;
        case Rank::Three: rankStr = "Three"; break;
        case Rank::Four: rankStr = "Four"; break;
        case Rank::Five: rankStr = "Five"; break;
        case Rank::Six: rankStr = "Six"; break;
        case Rank::Seven: rankStr = "Seven"; break;
        case Rank::Eight: rankStr = "Eight"; break;
        case Rank::Nine: rankStr = "Nine"; break;
        case Rank::Ten: rankStr = "Ten"; break;
        case Rank::Jack: rankStr = "Jack"; break;
        case Rank::Queen: rankStr = "Queen"; break;
        case Rank::King: rankStr = "King"; break;
        case Rank::Ace: rankStr = "Ace"; break;
    }

    string suitStr;
    switch (card.getSuit()) {
        case Suit::Hearts: suitStr = "Hearts"; break;
        case Suit::Diamonds: suitStr = "Diamonds"; break;
        case Suit::Clubs: suitStr = "Clubs"; break;
        case Suit::Spades: suitStr = "Spades"; break;
    }
    // Return rank then string
    return os << rankStr << " of " << suitStr;
}


