#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "User.h"
#include <iostream>


/**
 * @class stores an object of the deck, and 2 users, one for player and class
 */
class Game{
private:
    DeckOfCards cards;
    playingUser player;
    playingUser house;

public:
    //function to print the screen
    void printScreen();
    //function to deal cards to a user

    //function to play a turn

    //function to clear the screen

    //function to compare card values

    //function to swap cards, calling the return and get card functions from playingUser

    //function to 
};

#endif