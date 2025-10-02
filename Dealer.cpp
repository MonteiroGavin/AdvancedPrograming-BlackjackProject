//
// Created by Gavin  Monteiro on 9/9/25.
//
#include "Dealer.h"
#include "Deck.h"
#include "Card.h"

/************* Dealer class ******************/

Dealer::Dealer() : Player() {
    setName("Dealer");
    // Empty constructor
}

void Dealer::dealerTurn(Deck& deck) {
    // Reveal dealers full hand
    printHand(false);

    // Dealer must hit if hand is under 17
    while (getHandValue() < 17) {
        cout << "Dealer hits " << endl;
        // Draw card
        addCard(deck.drawCard());
        printHand(false);
    }
    if (bust()) {
        cout << "The dealer went bust. " << endl;
    }
    else {
        cout << "Dealer stands " << endl;
    }
}


void Dealer::printHand(bool hiddenCard) const {
    cout << "Dealer's hand: ";
    const vector<Card>& dealerHand = getHand();  // use Player’s public getter


    // For the size of the hand
    for (int i = 0; i < dealerHand.size(); i++) {
        // Prints hidden card as the first card if hiddenCard is true
        if (i == 0 && hiddenCard) {
            cout << "[Hidden Card]";
        } else {
            // Prints normal card
            cout << dealerHand[i];
        }
        if (i != dealerHand.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    if (!hiddenCard) {
        // Only prints total if hiddenCard is false
        cout << "Total: " << getHandValue() << endl;
    }
}