//
// Created by Gavin  Monteiro on 9/30/25.
//

#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include "Blackjack.h"
#include <iostream>
#include <sstream>
using namespace std;

bool testBlackjack();

int main() {
    if (testBlackjack()) {
        cout << "Passed all blackjack test cases" << endl;
    }
    return 0;
}

bool testBlackjack() {
    bool passed = true;

    // Card default constructor test, also tests getRank(), getValue(), getSuit(), and isAce()
    const Card card;
    if (card.getSuit() != Suit::Clubs || card.getRank() != Rank::Ace || card.getValue() != 11 || card.isAce() != true) {
        passed = false;
        cout << "FAILED card default constructor test case" << endl;
    }

    // Card print test case
    stringstream ss;
    // Making a stringstream of card and turinging it into a string, then comparing
    ss << card;
    string print = ss.str();
    if (print != "Ace of Clubs") {
        passed = false;
        cout << "FAILED card print test case" << endl;
    }

    // Deck constructor test
    Deck deck1;
    if (deck1.size() != 52) {
        passed = false;
        cout << "FAILED deck default constructor test case" << endl;
    }

    // All of this tests shuffle
    Deck deck2; // Second deck to compare
    deck1.shuffle();
    deck2.shuffle();
    // To keep track of identical located cards between the decks
    int similarities = 0;
    // Checks the value of each card
    for (int i = 0; i < 52; i++) {
        Card card1 = deck1.drawCard();
        Card card2 = deck2.drawCard();
        if (card1.getRank() == card2.getRank() && card1.getSuit() == card2.getSuit()) {
            similarities++;
        }
    }
    // Fails if decks are identical
    if (similarities == 52) {
        passed = false;
        cout << "FAILED deck shuffle test case" << endl;
    }

    // Deck draw card test case
    Deck deck3;
    deck3.drawCard();
    deck3.drawCard();
    if (deck3.size() != 50) {
        passed = false;
        cout << "FAILED deck draw card test case" << endl;
    }

    Player playerTest;

    // Player constructor test case
    if (playerTest.getName() != "John" || playerTest.getMoney() != 20.00) {
        passed = false;
        cout << "FAILED player constructor test case" << endl;
    }

    playerTest.setName("gavin");
    // Player set name test and another get name test case
    if (playerTest.getName() != "gavin") {
        passed = false;
        cout << "FAILED player set name test case" << endl;
    }

    // Player set hand test case
    playerTest.setHand(deck1.drawCard(), deck1.drawCard() );
    if (playerTest.getHand().size() != 2) {
        passed = false;
        cout << "FAILED player set hand test case" << endl;
    }

    // Player clear hand test case
    playerTest.clearHand();
    if (playerTest.getHandValue() != 0) {
        passed = false;
        cout << "FAILED player clear hand test case" << endl;
    }

    Card ace(Suit::Clubs, Rank::Ace);
    Card ten(Suit::Clubs, Rank::Ten);
    playerTest.setHand(ace, ten);

    // Player has blackjack test and another handvalue test
    if (playerTest.hasBlackjack() != true || playerTest.getHandValue() != 21) {
        passed = false;
        cout << "FAILED player blackjack check test case" << endl;
    }

    // Print hand test case
    stringstream hand;
    // Stack overflow and clion autofill helped with these three lines
    streambuf* redirectedCout = cout.rdbuf(hand.rdbuf());
    playerTest.printHand();
    cout.rdbuf(redirectedCout);
    string printHand = hand.str();
    if (printHand != "Your hand: Ace of Clubs, Ten of Clubs, \nYour hand total: 21\n") {
        passed = false;
        cout << "FAILED player print hand test case" << endl;
    }

    playerTest.addCard(deck1.drawCard());

    // Player test for bust check and another add card test case
    if (!playerTest.bust()) {
        passed = false;
        cout << "FAILED player bust check test case" << endl;
    }


    Dealer dealerTest;

    // Dealer constructor test case
    if (dealerTest.getName() != "Dealer") {
        passed = false;
        cout << "FAILED Dealer constructor test case" << endl;
    }

    Card two(Suit::Clubs, Rank::Two);
    Card three(Suit::Clubs, Rank::Three);
    dealerTest.setHand(two, three);

    // Dealer print hidden hand test case, stack overflow helped a lot with this
    stringstream dealerHand;
    streambuf* dealerCout = cout.rdbuf(dealerHand.rdbuf());
    dealerTest.printHand(true);
    cout.rdbuf(dealerCout);
    string printDealerHiddenHand = dealerHand.str();
    if (printDealerHiddenHand != "Dealer's hand: [Hidden Card], Three of Clubs\n") {
        passed = false;
        cout << "FAILED dealer hidden print test case" << endl;
    }

    // Clear stringstream
    dealerHand.str("");
    dealerHand.clear();

    // Dealer print full hand test case
    dealerCout = cout.rdbuf(dealerHand.rdbuf());
    dealerTest.printHand(false);
    cout.rdbuf(dealerCout);
    string printDealerTrueHand = dealerHand.str();
    if (printDealerTrueHand != "Dealer's hand: Two of Clubs, Three of Clubs\n") {
        passed = false;
        cout << "FAILED dealer print test case" << endl;
    }






    Blackjack blackjack(playerTest, dealerTest);

    return passed;
}
