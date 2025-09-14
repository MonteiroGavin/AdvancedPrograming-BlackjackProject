//
// Created by Gavin  Monteiro on 9/9/25.
//

#include "Player.h"
using namespace std;

/************* Player class ******************/

Player::Player() {
    playerName = "John";
}

void Player::setName(const string& name) {
    playerName = name;
}
void Player::setHand(Card card1, Card card2) {
    // In case anything is in the hand, clears it
    hand.clear();
    // Adds first card
    hand.push_back(card1);
    // Adds second card
    hand.push_back(card2);
}

void Player::clearHand() {
    hand.clear();
}

string Player::getName() const {
    return playerName;
}

vector<Card> Player::getHand() const{
    return hand;
}

void Player::addCard(Card card) {
    // Adds new card to hand vector
    hand.push_back(card);
}

int Player::getHandValue() const{
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

bool Player::hasBlackjack() const {
    // True if hand has blackjack
    return getHandValue() == 21;
}

void Player::printHand() const{
    cout << "Your hand: ";
    for (const Card& card : hand) {
        cout << card << " ";
    }
    cout << "Total: " << getHandValue() << endl;
}