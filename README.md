# Advanced Programming Open Ended Project Gavin Monteiro:
Blackjack: 
    My program runs the card game blackjack, with one player inputs. The player versus a dealer
and who ever's hand is closest to 21 after drawing cards, without going over, wins. Some
concepts used:
- Has-A class relationships:
  - Card and Deck. The deck class is composed of cards, therefore deck has a (or multiple) card(s).
  - Player classes Has-A hand. which although hand is not a class, it is made up of cards so it is still a Has-A relationship.
  - Blackjack has a Player, Dealer, and deck. All three of these are a part of a Has-A relationship with Blackjack.
- Is-A class relationships:
  - Dealer Is-A Player. Dealer uses many of the same functions as Player, with the exception of dealerTurn() and printHand().
  dealerTurn() is not like the playerTurn() as we are not asking for any I/O, the dealer runs their turn on their own. The 
  printHand() is different as the dealers first card before the player finishes their turn is hidden, so the print method needs 
  to be its own overide. Player does not have a turn() unlike dealer. That is because the player turn is happening in main as it takes inputs.
- Testing.cpp: I go through every class extensively and check for many different potenrial error cases. It goes through every function, even 
the ones that are considered trivial just to make sure they work well. 
  # Bugs
At the moment, no bugs are currently present. I did have to use break for some of my input validations
that could probably work without using that but I was having trouble finding a good way to do so.

# Future work
I do not have a split mechanic implemented, where the player can split their hand into two separate hands 
for double the chances to win. This would be an interesting addition to the game mechanics. I do not have a 
double down feature or any win streak multipliers for bets placed. 
Finally, more than one player implementation would be interesting to explore as well.

# Citations
// Used stackoverflow and geeks for geeks to help with printing test cases in testing.cpp, needed to reroute cout to check if certain prints occurred or not.
https://stackoverflow.com/questions/46061713/scope-of-redirection-of-stdcout
https://www.geeksforgeeks.org/cpp/io-redirection-c/
# Grade
