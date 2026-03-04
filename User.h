#ifndef User

#define User

#include "Cards.h"
#include "Deck.h"
#include "Cards.h"

#include <vector>
#include <string>
#include <iostream>

class playingUser{
    public:
        //store the cards of the user in a vector whose max size will be 3
        std::vector<Card> usersHand;
        
        //function that requests for a single card from the deck of cards
        void grabCardFromDeck(std::vector<Card> &deckOfCards);
        //function that puts a card back in the deck
        void returnCardToDeck(std::vector<Card> &deckOfCards, int cardToRemove);

        std::string getOneCard(int index);

        void printPlayerHand();

};

#endif