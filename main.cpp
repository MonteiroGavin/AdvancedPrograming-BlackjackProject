//
// Created by Gavin  Monteiro on 9/9/25.
//

#include <iostream>
#include "Player.h"
#include "Dealer.h"
#include "BlackJack.h"
using namespace std;

string getNameFromUser();

int main() {
    Player player1;
    Dealer dealer;
    bool endGame = false;

    cout << "Welcome to blackjack!" << endl;
    cout << "Please enter your player name: ";
    player1.setName(getNameFromUser());

    cout << endl << "Hello " << player1.getName() << " let's begin the game" << endl;
    while (!endGame) {
        Blackjack blackjack(player1, dealer);
        cout << "To continue enter 1, to quit enter 0: ";
        int choice;
        cin >> choice;
        if (choice == 0) {
            endGame = true;
        }

    }

    cout << "Thank you for playing!" << endl;
    return 0;
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