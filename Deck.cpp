#include <vector>
#include <string>
#include <iostream>
#include <random>

#include "Cards.h"
#include "Deck.h"


//to do
//remove playuer and house clas, trhey both do the same thing.  make them a single user class

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

int randomNumberInRange(int maxRangeInclusive){
    int randomIndex;
    std::random_device rand_dev;//creates random seed
    std::mt19937 generator(rand_dev());//seed is input into the generator
    std:: uniform_int_distribution<int> distr(0, maxRangeInclusive);//from 0 to the max range possible

    randomIndex = distr(generator);
    return randomIndex;
}



//constructor that initializes a full deck of 52 cards
DeckOfCards::DeckOfCards(){
    //initializing 52 Card structs
    for(int i = 0; i < 52; i++){
        playingDeck.push_back(Card());
    }

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

void DeckOfCards::CardShuffling(){//will use random number in range from the rng class that iwll be made soon
    //create a random number from 0 to the size of the vector
    //that random number is the current index of the array that you will swap with the last index of the array
    //shorten the ranodm number from 0 to size - 1 everytime you swap elements
    //swap until the vector has been shuffled and randomized
    //if the random number selected is the last index of the array, keep that element there and move to the next swap
}

int main(){
    std::cout << "Hello World" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    
    DeckOfCards testingTheDeck;

    
    
    std::cout << "-------------------------------" << std::endl;
    std::cout << "The program ends" << std::endl;   
}