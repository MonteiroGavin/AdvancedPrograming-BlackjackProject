//
// Created by Gavin  Monteiro on 9/9/25.
//

#include <iostream>
#include "Player.h"
#include "Dealer.h"
#include "BlackJack.h"
#include "BlackJack.h"
using namespace std;

string getNameFromUser();

int main() {
    Player player1;
    Dealer dealer;
    bool endGame = false;
    bool doneTurn = false;

    cout << "Welcome to blackjack!" << endl;
    cout << "Please enter your player name: ";
    player1.setName(getNameFromUser());

    cout << endl << "Hello " << player1.getName() << " let's begin the game" << endl;
    while (!endGame) {
        Blackjack blackjack(player1, dealer);
        blackjack.initialDeal();

        // While loop to allow player to hit multiple times
        while (!doneTurn){
            int getChoiceFromUser();
            // Player hit
            if (getChoiceFromUser() == 1) {
                blackjack.playerHit();
            }
            // Check if hit resulted in a bust
            if (player1.bust()) {
                doneTurn = true;
            }
            // Stand, ending turn
            if (getChoiceFromUser() == 0) {
                doneTurn = true;
            }
        }

        cout << "To play another round enter 1, to quit enter 0: ";
        int continueChoice;
        cin >> continueChoice;
        if (continueChoice == 0) {
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

int getChoiceFromUser() {
    string input;
    cout << "Hit: 1 " << endl << "Stand: 0 " << endl;

    while (true) {
        // Gets whole line of input
        getline(cin, input);

        // Covers if input is empty
        if (input.empty()) {
            cout << "No input. Enter 0 or 1: ";
            continue;
        }

        // To check if the line has any spaces
        bool containsSpace = false;
        // Loops to see if there is a space
        for (int i = 0; i < input.length(); i++) {
            if (isspace(input[i])) {
                containsSpace = true;
            }
        }
        // Confirms if has more than one word
        if (containsSpace) {
            cout << "Invalid input. Enter 0 or 1: ";
            continue;
        }

        if (input == "1") {
            return 1;
        }
        if (input == "0")
            return 0;{
        }

        cout << "Invalid input. Enter a 0 or 1: ";

    }
}