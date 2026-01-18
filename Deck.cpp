#include <vector>
#include <string>
#include <iostream>

#include "Cards.h"
#include "Deck.h"
#include "House.h"
#include "Player.h"

void normalNumberCards(std::vector<Card> &playingDeck, int &currentIndex, std::string suite){
    for(int i = 0; i < 9; i++){
        int currentCardValue = i + 2;
        playingDeck[currentIndex].numberValue = currentCardValue;
        playingDeck[currentIndex].suite = suite;
        playingDeck[currentIndex].visualValue = std::to_string(currentCardValue);
        currentIndex++;
   }
}

//rewrite to print the jack queen king and ace of a single suite
void faceCards(std::vector<Card> &playingDeck, int &currentIndex, std::string suite){
    for(int i = 0; i < 4; i++){        
        //♥ ♦ ♣ ♠
        switch(i){
            case 0:
                playingDeck[currentIndex].visualValue = "J";
                playingDeck[currentIndex].numberValue = 10;
                break;
            case 1:
                playingDeck[currentIndex].visualValue = "Q";
                playingDeck[currentIndex].numberValue = 10;
                break;
            case 2:
                playingDeck[currentIndex].visualValue = "K";
                playingDeck[currentIndex].numberValue = 10;
                break;
            case 3:
                playingDeck[currentIndex].visualValue = "A";
                playingDeck[currentIndex].numberValue = 1;
                break;
        }

        playingDeck[currentIndex].suite = suite;
        currentIndex++;
   }
}




//constructor that initializes a full deck of 52 cards
DeckOfCards::DeckOfCards(){
    //♥ ♦ ♣ ♠ 
    //initializing 52 Card structs
    for(int i = 0; i < 52; i++){
        playingDeck.push_back(Card());
    }
    //----------------------------------------------------------------------------
    int currentIndex = 0;//keeping track of index having data added to it

    normalNumberCards(playingDeck, currentIndex, "♥");
    normalNumberCards(playingDeck, currentIndex, "♦");
    normalNumberCards(playingDeck, currentIndex, "♣");
    normalNumberCards(playingDeck, currentIndex, "♠");

    faceCards(playingDeck, currentIndex, "♥");
    faceCards(playingDeck, currentIndex, "♦");
    faceCards(playingDeck, currentIndex, "♣");
    faceCards(playingDeck, currentIndex, "♠");
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