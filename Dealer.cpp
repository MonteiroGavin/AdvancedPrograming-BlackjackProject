//
// Created by Gavin  Monteiro on 9/9/25.
//
#include "Dealer.h"
#include "Deck.h"
#include "Card.h"

/************* Dealer class ******************/

Dealer::Dealer() {
    // Empty constructor
}

void Dealer::setHand(Card card1, Card card2) {
    // In case anything is in the hand, clears it
    hand.clear();
    // Adds first card
    hand.push_back(card1);
    // Adds second card
    hand.push_back(card2);
}

void Dealer::clearHand() {
    hand.clear();
}

vector<Card> Dealer::getHand() const{
    return hand;
}

void Dealer::addCard(Card card) {
    // Adds new card to hand vector
    hand.push_back(card);
}

int Dealer::getHandValue() const{
    int sum = 0;
    int aceCount = 0;

    for (const Card& card : hand) {
        // Add all cards up
        sum += card.getValue();
        if (card.isAce()) {
            aceCount++;
        }
    }
    while (sum > 21 && aceCount > 0) {
        // Changing ace value to 1 if hand goes over 21
        sum -= 10;
        aceCount--;
    }
    return sum;
}

bool Dealer::hasBlackjack() const {
    // True if hand has blackjack
    return getHandValue() == 21;
}

bool Dealer::bust() const {
    return getHandValue() >= 21;
}

void Dealer::dealerTurn(Deck& deck) {
    // Dealer must hit if hand is under 17
    while (getHandValue() < 17) {
        addCard(deck.drawCard());
        printHand(false);
    }
}

void Dealer::printHand(bool hiddenCard) const {
    cout << "Dealer's hand: ";
    for (int i = 0; i < hand.size(); i++) {
        if (i == 0 && hiddenCard) {
            cout << "[Hidden card], ";
        } else {
            cout << hand[i];
        }
    }
    cout << endl;
    if (!hiddenCard) {
        cout << "Total: " << getHandValue();
    }
}