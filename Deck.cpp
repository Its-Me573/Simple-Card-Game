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

   //All diamond 2-10
   for(int i = 0; i < 9; i++){
        int currentCardValue = i + 2;
        playingDeck[currentIndex].numberValue = currentCardValue;
        playingDeck[currentIndex].suite = "♦";
        playingDeck[currentIndex].visualValue = std::to_string(currentCardValue);
        currentIndex++;
   }

   //All clubs 2-10
   for(int i = 0; i < 9; i++){
        int currentCardValue = i + 2;
        playingDeck[currentIndex].numberValue = currentCardValue;
        playingDeck[currentIndex].suite = "♣";
        playingDeck[currentIndex].visualValue = std::to_string(currentCardValue);
        currentIndex++;
   }

   //All spade 2-10
   for(int i = 0; i < 9; i++){
        int currentCardValue = i + 2;
        playingDeck[currentIndex].numberValue = currentCardValue;
        playingDeck[currentIndex].suite = "♠";
        playingDeck[currentIndex].visualValue = std::to_string(currentCardValue);
        currentIndex++;
   }

   //All 4 jacks
   for(int i = 0; i < 4; i++){
        playingDeck[currentIndex].numberValue = 10;
        //♥ ♦ ♣ ♠
        switch(i){
            case 0:
                playingDeck[currentIndex].suite = "♥";
                break;
            case 1:
                playingDeck[currentIndex].suite = "♦";
                break;
            case 2:
                playingDeck[currentIndex].suite = "♣";
                break;
            case 3:
                playingDeck[currentIndex].suite = "♠";
                break;
        }

        playingDeck[currentIndex].visualValue = "J";
        currentIndex++;
   }

   //All 4 Queens
   for(int i = 0; i < 4; i++){
        playingDeck[currentIndex].numberValue = 10;
        //♥ ♦ ♣ ♠
        switch(i){
            case 0:
                playingDeck[currentIndex].suite = "♥";
                break;
            case 1:
                playingDeck[currentIndex].suite = "♦";
                break;
            case 2:
                playingDeck[currentIndex].suite = "♣";
                break;
            case 3:
                playingDeck[currentIndex].suite = "♠";
                break;
        }

        playingDeck[currentIndex].visualValue = "Q";
        currentIndex++;
   }

   //All 4 Kings
   for(int i = 0; i < 4; i++){
        playingDeck[currentIndex].numberValue = 10;
        //♥ ♦ ♣ ♠
        switch(i){
            case 0:
                playingDeck[currentIndex].suite = "♥";
                break;
            case 1:
                playingDeck[currentIndex].suite = "♦";
                break;
            case 2:
                playingDeck[currentIndex].suite = "♣";
                break;
            case 3:
                playingDeck[currentIndex].suite = "♠";
                break;
        }

        playingDeck[currentIndex].visualValue = "K";
        currentIndex++;
   }

   //All 4 aces
   //All 4 jacks
   for(int i = 0; i < 4; i++){
        playingDeck[currentIndex].numberValue = 1;
        //♥ ♦ ♣ ♠
        switch(i){
            case 0:
                playingDeck[currentIndex].suite = "♥";
                break;
            case 1:
                playingDeck[currentIndex].suite = "♦";
                break;
            case 2:
                playingDeck[currentIndex].suite = "♣";
                break;
            case 3:
                playingDeck[currentIndex].suite = "♠";
                break;
        }

        playingDeck[currentIndex].visualValue = "A";
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

    for(int i = 0; i < 31; i++){
        std::cout << testingTheDeck.playingDeck[i].numberValue << std::endl;
        std::cout << testingTheDeck.playingDeck[i].suite << std::endl;
        std::cout << testingTheDeck.playingDeck[i].visualValue << std::endl;
    }

    std::cout << "-------------------------------" << std::endl;
    std::cout << "The program ends" << std::endl;
    
}