//
// Created by Gavin  Monteiro on 9/9/25.
//

#include <iostream>
#include "Deck.h"
#include "Card.h"
#include "Player.h"
#include "Dealer.h"
#include "BlackJack.h"
using namespace std;

int main() {
    string getNameFromUser();

    Player player1;
    Dealer dealer;
    bool endGame = false;

    cout << "Welcome to blackjack!" << endl;
    cout << "Please enter your player name: ";
    //player1.setName(getNameFromUser());

    cout << endl << "Hello " << player1.getName() << " let's begin the game" << endl;
    Blackjack blackjack;
    while (!endGame) {
        blackjack.Blackjack(player1, dealer);
        cout << "To continue enter 1, to quit enter 0: ";
    }


}

string getNameFromUser() {
    string input;
    while (true) {
        // Gets whole line of input
        getline(cin, input);

        // Covers if input is empty
        if (input.empty()) {
            cout << "No input. Enter your player name: ";
        }
        else {
            return input;
        }
    }
}