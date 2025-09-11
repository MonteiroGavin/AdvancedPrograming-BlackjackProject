//
// Created by Gavin  Monteiro on 9/9/25.
//

#include "Player.h"
using namespace std;

/************* Player class ******************/

Player::Player() {
    playername = "John";
}

void Player::setName(string name) {
    playername = name;
}
void Player::setHand(Card card1, Card card2) {
    // In case anything is in the hand, clears it
    hand.clear();
    // Adds first card
    hand.push_back(card1);
    // Adds second card
    hand.push_back(card2);
}

string Player::getName() {
    return playername;
}

vector<Card> Player::getHand(){
    return hand;
}

void Player::addCard(Card card) {
    // Adds new card to hand vector
    hand.push_back(card);
}
