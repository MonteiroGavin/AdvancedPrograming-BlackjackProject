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

    bool Blackjack::placeBet(float bet) {
    if (player.getMoney() > bet && bet > 2) {
        player.setMoney(player.getMoney() - bet);
        return true;
    }
    return false;
}


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

    // Set hands
    player.setHand(playerDeal1, playerDeal2);
    dealer.setHand(dealerDeal1, dealerDeal2);

    // Print hands
    dealer.printHand(true);
    player.printHand();

    if (dealer.hasBlackjack()) {
        cout << "the dealer has blackjack, you lose." << endl;
    }

    if (player.hasBlackjack()) {
        cout << "You have blackjack, you win!" << endl;
    }
}

void Blackjack::playerHit() {
    Card newCard = deck.drawCard();
    player.addCard(newCard);
    player.printHand();
}

void Blackjack::dealerTurn() {
    // Runs dealerTurn() but needed the same deck in blackjack class
    dealer.dealerTurn(deck);
}

void Blackjack::compareHands() {
    cout << endl;

    player.printHand();
    dealer.printHand(false);

    cout << "Your total: " << player.getHandValue() << endl;

    if (player.getHandValue() > dealer.getHandValue()) {
        cout << player.getName() <<" wins!" << endl;
        player.setMoney(player.getMoney() + (2*bets));
        cout << "You won: $" << bets << ". Your money: $" << player.getMoney() << endl;

    } else if (player.getHandValue() < dealer.getHandValue()) {
        cout << "Dealer wins!" << endl;
        cout << "You lost: $" << bets << ". Your money: $" <<player.getMoney() << endl;
    } else if (player.getHandValue() == dealer.getHandValue()) {
        cout << "Push, no one wins." << endl;
        cout << "You lost: nothing. Your money: $" <<player.getMoney() << endl;

    }
}







