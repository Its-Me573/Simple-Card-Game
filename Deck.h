#ifndef Deck
#include <vector>
#include "Cards.h"

#define Deck

class DeckOfCards{
    public:
        //constructor that initializes a vector with 52 indexes for the 52 cards
        DeckOfCards();

        //vector for storing the cards
        std::vector<Card> playingDeck;
        
        //function that shuffles the vector parameter passed by reference
        void CardShuffling(std::vector<Card> &);
};

#endif