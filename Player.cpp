//
// Created by Gavin  Monteiro on 9/9/25.
//

#include "Player.h"
#include <random>
using namespace std;

/************* Player class ******************/

Player::Player() {
    playername = "John";
    hand;
}

void Player::setName(string name) {
    playername = name;
}
void Player::setHand(Card card1, Card card2) {
    hand.push_back(card1);
    hand.push_back(card2);
}

string Player::getName() {
    return playername;
}

Card Player::getHand(){
    return hand;
}

void Player::addCard(Card card) {
    hand.push_back(card);
}