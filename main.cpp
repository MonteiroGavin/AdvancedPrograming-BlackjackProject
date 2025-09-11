//
// Created by Gavin  Monteiro on 9/9/25.
//

#include <iostream>
#include "Deck.h"
#include "Card.h"
using namespace std;

int main() {
    cout << "Welcome to blackjack!" << endl;
    cout << "Please enter your player name: ";
    string player1;
    //playerName = getInputfromUser();
    //player1.setName(playerName);

}

string getInputFromUser() {
    string input;
    while (true) {
        // Gets whole line of input
        getline(cin, input);

        // Covers if input is empty
        if (input.empty()) {
            cout << "No input. Enter your player name: ";
        }
        else {
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
                cout << "Invalid input. Enter your player name in one word: ";
            }

            else {
                return input;
            }
        }
    }
}