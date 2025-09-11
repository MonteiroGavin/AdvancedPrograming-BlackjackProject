//
// Created by Gavin  Monteiro on 9/9/25.
//

#include "BlackJack.h"
#include "Dealer.h"
#include "Player.h"
#include "Card.h"
#include "Deck.h"

/************* Blackjack class ******************/

Blackjack::Blackjack(Player player, Dealer dealer) {
    // Initialize a deck of cards
    Deck deck = Deck();
    // Shuffle deck
    deck.shuffle();

    //Deal cards
    Card playerDeal1 = deck.drawCard();
    Card dealerDeal1 = deck.drawCard();
    Card playerDeal2 = deck.drawCard();
    Card dealerDeal2 = deck.drawCard();
    player.setHand(playerDeal1, playerDeal2);
    dealer.setHand(dealerDeal1, dealerDeal2);

    // Checks if dealer has a blackjack
    if (dealer.checkBlackjack(dealer.getHand())) {
        cout << "The dealer has blackjack, you lose" << endl;
        return;
    }


}

Card Blackjack::checkBlackjack(vector<Card> hand) {
    int total = 0;
    for (int i = 0; i < hand.size(); i++) {
        hand[i].getRank() + total;
    }
}