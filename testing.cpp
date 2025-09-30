//
// Created by Gavin  Monteiro on 9/30/25.
//

#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include "Blackjack.h"
#include <iostream>
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

    Quiz quiz;
    if (quiz.getTitle() != "Default quiz" || quiz.getTotalPointsCorrect() != 0 || quiz.getTotalPointsPossible() != 0) {
        passed = false;
        cout << "FAILED default constructor test case" << endl;
    }
    Question q1 = Question();
    q1.setPrompt("Do emus lay eggs?");
    q1.setPoints(5);
    q1.addAnswer("yes", true);
    q1.addAnswer("no", false);
    answer idk = {"idk", false};
    q1.addAnswer(idk);
    if (q1.getPoints() != 5 || q1.getNumAnswers() != 3 || q1.getPrompt() == "") {
        passed = false;
        cout << "FAILED question set test case" << endl;
    }
    q1.removeAnswer(1);
    q1.removeAnswer("idk");
    if (q1.getNumAnswers() != 1) {
        passed = false;
        cout << "FAILED question remove test case" << endl;
    }
    if (!q1.isCorrect(0) || q1.isCorrect(10)) {
        passed = false;
        cout << "FAILED question is correct test case" << endl;
    }

    quiz.addQuestion(q1);

    Question q2 = Question();
    q2.setPrompt("Do emus eat people?");
    q2.setPoints(5);
    q2.addAnswer("yes", false);
    q2.addAnswer("no", true);
    quiz.addQuestion(q2);

    if (quiz.getQuestion(0).getPrompt() != q1.getPrompt() || quiz.getQuestion("Do emus lay eggs?").getPrompt() != q1.getPrompt()) {
        passed = false;
        cout << "FAILED question getQuestion test case" << endl;
    }
    quiz.setTitle("Emu quiz");
    if (quiz.getTitle() != "Emu quiz") {
        passed = false;
        cout << "FAILED question set title test case" << endl;
    }

    if (!quiz.removeQuestion(0) || !quiz.removeQuestion("Do emus eat people?")) {
        passed = false;
        cout << "FAILED question remove test case" << endl;
    }

    // Doing this last when I am done using q1
    q1.clearAnswers();
    if (q1.getNumAnswers() != 0) {
        passed = false;
        cout << "FAILED question clear answer test case" << endl;
    }

    return passed;
}
