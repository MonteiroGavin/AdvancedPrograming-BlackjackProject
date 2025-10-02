# CS 2300 Module 2 Open Ended Project Gavin Monteiro:
Blackjack: 
    My program runs the card game blackjack, with one player inputs. The player versus a dealer
and who ever's hand is closest to 21 after drawing cards, without going over, wins. This program 
uses many Module one concepts such as:
- Has-A class relationships:
  - Card and Deck. The deck class is composed of cards, therefore deck has a (or multiple) card(s).
  - Player classes Has-A hand. which although hand is not a class, it is made up of cards so it is still a Has-A relationship.
  - Blackjack has a Player, Dealer, and deck. All three of these are a part of a Has-A relationship with Blackjack.
- Is-A class relationships:
  - Dealer Is-A Player. Dealer uses many of the same functions as Player, with the exception of dealerTurn() and printHand().
  dealerTurn() is not like the playerTurn() as we are not asking for any I/O, the dealer runs their turn on their own. The 
  printHand() is different as the dealers first card before the player finishes their turn is hidden, so the print method needs 
  to be its own overide. Player does not have a turn() unlike dealer. That is because the player turn is happening in main as it takes inputs.
- Testing.cpp: 
  # Bugs
At the moment, no bugs are currently present. I did have to use break for some of my input validations
that could probably work without using that but I was having trouble finding a good way to do so.

# Future work
I do not have a split mechanic implemented, where the player can split their hand into two separate hands
for double the chances to win. This would be an interesting addition to the game mechanics.
There is also no betting system or win streak/score implemented that could be further developed.
Finally, more than one player implementation would be interesting to explore as well.

# Citations
// Used stackoverflow to help with printing test cases in testing.cpp, especially Player and Dealer printHand()
https://stackoverflow.com/questions/46061713/scope-of-redirection-of-stdcout
# Grade

I think I have earned 240 points
- Main.cpp: 
- Testing.cpp: 
- Has-A relationships: I believe I have credit for the following relationships: 
  - Deck has Card(s) which would be 20 points. 
  - Dealer and Player both have hands which have cards(I do not know if since player and dealer are too similar because of the way they both 
  use hand in the same way) which would be 40 points.
  - Blackjack has a Player a Dealer a Deck and cards, since these  are four has-a 
  relationships, they are 80 points. 
  - This brings a total of 140 points (If dealer and player are counted as the same, then 120 points)
- Is-A relationships: Dealer Is-A relationship with Player, this is the only use of Is-A relationship so it totals to 20 points
- File I/O:
- Style and documentation: 0 points. I think there are comments and details where needed and are throughout my program.
- Video: 0 points. I run through multiple times and reach different ways to end the round, showing many parts of my program.
- Lifespan of project: 0 points. I created the repository on Sep 23rd, well before the 7 day minimum. I have also had at least 3 days of significant work.
