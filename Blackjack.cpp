//
// Created by Gavin  Monteiro on 9/9/25.
//

#include "BlackJack.h"
#include "Dealer.h"
#include "Player.h"
#include "Card.h"
#include "Deck.h"

/************* Blackjack class ******************/

Blackjack::Blackjack(Player& player, Dealer& dealer)
    // Initialize player and dealer
    : player(player),
    dealer(dealer),
    deck()
{}

void Blackjack::initialDeal() {
    // Shuffle deck
    deck.shuffle();

    // Reset hands
    dealer.clearHand();
    player.clearHand();

    // Deal cards
    Card playerDeal1 = deck.drawCard();
    Card dealerDeal1 = deck.drawCard();
    Card playerDeal2 = deck.drawCard();
    Card dealerDeal2 = deck.drawCard();
    player.setHand(playerDeal1, playerDeal2);
    dealer.setHand(dealerDeal1, dealerDeal2);
    dealer.printHand(true);
    player.printHand();

    if (dealer.hasBlackjack()) {
        cout << "the dealer has blackjack, you lose." << endl;
        return;
    }

    if (player.hasBlackjack()) {
        cout << "You have blackjack, you win!" << endl;
        return;
    }
}

void Blackjack::playerHit() {
    Card newCard = deck.drawCard();
    player.addCard(newCard);
    player.printHand();
}

void Blackjack::dealerTurn() {
    dealer.dealerTurn(deck);
}

void Blackjack::compareHands() {
    cout << endl;

    cout << "Your hand: ";
    player.printHand();
    cout << " Your total: " << player.getHandValue() << endl;

    cout << "dealer's hand: ";
    dealer.printHand(false);
    cout << " Your total: " << dealer.getHandValue() << endl;

    if (player.getHandValue() > dealer.getHandValue()) {
        cout << "Player wins!" << endl;

    } else if (player.getHandValue() < dealer.getHandValue()) {
        cout << "Dealer wins!" << endl;
    }
}







