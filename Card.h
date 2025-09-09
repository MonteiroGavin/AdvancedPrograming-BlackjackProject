//
// Created by Gavin  Monteiro on 9/9/25.
//

#ifndef M1OEP_GTMONTEI_CARD_H
#define M1OEP_GTMONTEI_CARD_H

#include <iostream>
using namespace std;

class Card {
public:
    Card();
    Card(string suit,string rank);

    void setSuit(string suit);
    void setRank(string rank);
    string getSuit();
    string getRank();
private:
    string suit;
    string rank;
    string suits[4] = { "clubs", "spades", "diamonds", "hearts" };
    string ranks[13] = { "Ace", "3", "4", "5", "6", "7", "8", "9",
                    "10", "Jack", "Queen", "King" };
};
#endif //M1OEP_GTMONTEI_CARD_H