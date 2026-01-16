#include <vector>
#include <string>
#include "Cards.h"
#include "Deck.h"

DeckOfCards::DeckOfCards(){
    //52 Card size vector
    //♥ ♦ ♣ ♠ 
    std::vector<Card> playingDeck;

    //initializes every index with a card struct
    for(int i = 0; i < 52; i++){
        playingDeck.push_back(Card());
    }



    //to do
    //this entire section is placing values wrong. it keeps overwriting previous values
    //because the current index isnt being tracked
    //add an int that trackls the current value and use that as the index reference



    //initialize all hearts first excluding Aces, Kings, Queens, and Jacks
    //Hearts
    for(int i = 0; i < 9; i++){
        int currentSuiteValue = i + 2;
        playingDeck[i].suite = "♥";
        playingDeck[i].numberValue = currentSuiteValue;
        playingDeck[i].visualValue = std::to_string(currentSuiteValue);
    }

    //Diamonds
    for(int i = 0; i < 9; i++){
        int currentSuiteValue = i + 2;
        playingDeck[i].suite = "♦";
        playingDeck[i].numberValue = currentSuiteValue;
        playingDeck[i].visualValue = std::to_string(currentSuiteValue);
    }

    //Clubs
    for(int i = 0; i < 9; i++){
        int currentSuiteValue = i + 2;
        playingDeck[i].suite = "♣";
        playingDeck[i].numberValue = currentSuiteValue;
        playingDeck[i].visualValue = std::to_string(currentSuiteValue);
    }

    //Spades
    for(int i = 0; i < 9; i++){
        int currentSuiteValue = i + 2;
        playingDeck[i].suite = "♠";
        playingDeck[i].numberValue = currentSuiteValue;
        playingDeck[i].visualValue = std::to_string(currentSuiteValue);
    }

    //Kings
    for(int i = 0; i < 4; i++){
        switch(i){
            case 0:
                playingDeck[i].suite = "♥";
                break;
            case 1:
                playingDeck[i].suite = "♦";
                break;
            case 3:
                playingDeck[i].suite = "♣";
                break;
            case 4:
                playingDeck[i].suite = "♠";
                break;
        }
        playingDeck[i].numberValue = 10;
        playingDeck[i].visualValue = "K";
    }

    //Queens
    for(int i = 0; i < 4; i++){
        playingDeck[i].suite = "♠";
        playingDeck[i].numberValue = 10;
        playingDeck[i].visualValue = "K";
    }

    //Jacks

    //Aces




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