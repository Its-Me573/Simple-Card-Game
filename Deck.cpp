#include <vector>
#include <string>
#include <iostream>

#include "Cards.h"
#include "Deck.h"
#include "House.h"
#include "Player.h"

//constructor code for the class
DeckOfCards::DeckOfCards(){
    //♥ ♦ ♣ ♠ 
    std::cout << "the constructor is working" << std::endl;

    //initializing 52 Card structs
    for(int i = 0; i < 52; i++){
        playingDeck.push_back(Card());
    }

    std::cout << playingDeck.size() << " is the size of the vector" << std::endl;

    //----------------------------------------------------------------------------
    int currentIndex = 0;//keeping track of index having data added to it
       
   //All hearts 2-10
   for(int i = 0; i < 9; i++){
        int currentCardValue = i + 2;
        playingDeck[currentIndex].numberValue = currentCardValue;
        playingDeck[currentIndex].suite = "♥";
        playingDeck[currentIndex].visualValue = std::to_string(currentCardValue);
        currentIndex++;
   }


}

//ascii art
/** 
┌──────┐
│J ♠   │
│      │
│      │
│  ♠ J │
└──────┘
**/


int main(){
    std::cout << "Hello World" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    
    DeckOfCards testingTheDeck;

    for(int i = 0; i < 9; i++){
        std::cout << testingTheDeck.playingDeck[i].numberValue << std::endl;
        std::cout << testingTheDeck.playingDeck[i].suite << std::endl;
        std::cout << testingTheDeck.playingDeck[i].visualValue << std::endl;
    }

    std::cout << "-------------------------------" << std::endl;
    std::cout << "The program ends" << std::endl;
    
}