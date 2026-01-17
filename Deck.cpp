#include <vector>
#include <string>
#include "Cards.h"
#include "Deck.h"
#include <iostream>


DeckOfCards::DeckOfCards(){
    //52 Card size vector
    //♥ ♦ ♣ ♠ 
    std::vector<Card> playingDeck;

    //initializes every index with a card struct
    for(int i = 0; i < 52; i++){
        playingDeck.push_back(Card());
    }

    //Hearts
    int currentIndex = 0;
    for(int i = 0; i < 9; i++){
        int currentSuiteValue = i + 2;
        playingDeck[currentIndex].suite = "♥";
        playingDeck[currentIndex].numberValue = currentSuiteValue;
        playingDeck[currentIndex].visualValue = std::to_string(currentSuiteValue);
        currentIndex++;
    }

    //Diamonds
    for(int i = 0; i < 9; i++){
        int currentSuiteValue = i + 2;
        playingDeck[currentIndex].suite = "♦";
        playingDeck[currentIndex].numberValue = currentSuiteValue;
        playingDeck[currentIndex].visualValue = std::to_string(currentSuiteValue);
        currentIndex++;
    }

    //Clubs
    for(int i = 0; i < 9; i++){
        int currentSuiteValue = i + 2;
        playingDeck[currentIndex].suite = "♣";
        playingDeck[currentIndex].numberValue = currentSuiteValue;
        playingDeck[currentIndex].visualValue = std::to_string(currentSuiteValue);
        currentIndex++;
    }

    //Spades
    for(int i = 0; i < 9; i++){
        int currentSuiteValue = i + 2;
        playingDeck[currentIndex].suite = "♠";
        playingDeck[currentIndex].numberValue = currentSuiteValue;
        playingDeck[currentIndex].visualValue = std::to_string(currentSuiteValue);
        currentIndex++;
    }

    //Kings
    for(int i = 0; i < 5; i++){
        switch(i){
            case 0:
                playingDeck[currentIndex].suite = "♥";
                break;
            case 1:
                playingDeck[currentIndex].suite = "♦";
                break;
            case 3:
                playingDeck[currentIndex].suite = "♣";
                break;
            case 4:
                playingDeck[currentIndex].suite = "♠";
                break;
        }
        playingDeck[currentIndex].numberValue = 10;
        playingDeck[currentIndex].visualValue = "K";
        currentIndex++;
    }

    //Queens
    for(int i = 0; i < 5; i++){
        switch(i){
            case 0:
                playingDeck[currentIndex].suite = "♥";
                break;
            case 1:
                playingDeck[currentIndex].suite = "♦";
                break;
            case 3:
                playingDeck[currentIndex].suite = "♣";
                break;
            case 4:
                playingDeck[currentIndex].suite = "♠";
                break;
        }
        playingDeck[currentIndex].numberValue = 10;
        playingDeck[currentIndex].visualValue = "Q";
        currentIndex++;
    }

    //Jacks
    for(int i = 0; i < 5; i++){
        switch(i){
            case 0:
                playingDeck[currentIndex].suite = "♥";
                break;
            case 1:
                playingDeck[currentIndex].suite = "♦";
                break;
            case 3:
                playingDeck[currentIndex].suite = "♣";
                break;
            case 4:
                playingDeck[currentIndex].suite = "♠";
                break;
        }
        playingDeck[currentIndex].numberValue = 10;
        playingDeck[currentIndex].visualValue = "J";
        currentIndex++;
    }

    //Aces
    for(int i = 0; i < 5; i++){
        switch(i){
            case 0:
                playingDeck[currentIndex].suite = "♥";
                break;
            case 1:
                playingDeck[currentIndex].suite = "♦";
                break;
            case 3:
                playingDeck[currentIndex].suite = "♣";
                break;
            case 4:
                playingDeck[currentIndex].suite = "♠";
                break;
        }
        playingDeck[currentIndex].numberValue = 1;//Not blackjack rules
        playingDeck[currentIndex].visualValue = "A";
        currentIndex++;
    }

}

/** 
┌──────┐
│J ♠   │
│      │
│      │
│  ♠ J │
└──────┘
**/


int main(){
        

}