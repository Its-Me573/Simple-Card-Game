#include <vector>
#include <string>
#include <iostream>
#include <random>

#include "Cards.h"
#include "Deck.h"
#include "RNG.h"

/** Initializes normal value of cards 1-9 with the specified suite
 * @param playingDeck deck of cards object
 * @param currentIndex current index of the vector
 * @param suite the string of the cards suite
 */
void normalNumberCards(std::vector<Card> &playingDeck, int &currentIndex, std::string suite){
    for(int i = 0; i < 9; i++){
        int currentCardValue = i + 2;
        playingDeck[currentIndex].numberValue = currentCardValue;
        playingDeck[currentIndex].suite = suite;
        playingDeck[currentIndex].visualValue = std::to_string(currentCardValue);
        currentIndex++;
   }
}

/** Initializes cards with face values. Jack, Queen, Kind, and Aces
 * @param playingDeck deck of cards object
 * @param currentIndex the current starting position of the cards being initialized
 * @param suite the suite of the cards being initialized
 */
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

/** Return the random index in range by calling a random number
 * @param maxRangeInclusive The max range of vector for a random number
 * @return the random index of the vector in range
 */
int randomNumberInRange(int maxRangeInclusive){
    int randomIndex;
    std::random_device rand_dev;//creates random seed
    std::mt19937 generator(rand_dev());//seed is input into the generator
    std:: uniform_int_distribution<int> distr(0, maxRangeInclusive);//from 0 to the max range possible

    randomIndex = distr(generator);
    return randomIndex;
}

//Initializes a vector of cards and initializes the values of the cards
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

/** Shuffles the vector storing the deck of cards
 * @param theDeck the vector storing the deck of cards
 */
void DeckOfCards::CardShuffling(std::vector<Card> &theDeck){
    //get a random index from 0 to the current index of theDeck being randomized
    int currentLastIndex = theDeck.size()-1;
    int randomIndexInRange;
    Card tempCardPlaceholder;
    for(int i = 0; i < theDeck.size(); i++){
        //std::cout << "The current last index is " << currentLastIndex << std::endl;
        randomIndexInRange = RandomNum::randomNumberInRange(0, currentLastIndex);
        //std::cout << "The random num is " << randomIndexInRange << std::endl;
    
        //set the Card placeholder equal to the last index within range to store the value of it;
        tempCardPlaceholder = theDeck[currentLastIndex];
        //set the last index of theDeck equal to the randomIndexInRange
        theDeck[currentLastIndex] = theDeck[randomIndexInRange];
        //set the randomIndexInRange equal to the last index by useing the tempCardHolder
        theDeck[randomIndexInRange] = tempCardPlaceholder;

        //set the range 1 less since the last element is already completed;
        currentLastIndex--;
    }
}

/** Prints the information at an index of the deck with card value
 * @param theDeck the vector whose indexes are being printed
 */
void DeckOfCards::printTheDeck(std::vector<Card> &theDeck){
    for(int i = 0; i < theDeck.size(); i++){
        //print the cards with a seperation marking each line as together
        std::cout << "-------------" << std::endl;
        std::cout << theDeck[i].suite << std::endl;
        std::cout << theDeck[i].visualValue << std::endl;
        std::cout << "-------------" << std::endl;
    }
}

int main(){
    std::cout << "Hello World" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    
    DeckOfCards testingTheDeck;
    //print the deck for testing
    testingTheDeck.printTheDeck(testingTheDeck.playingDeck);
    
    //call shuffler function
    testingTheDeck.CardShuffling(testingTheDeck.playingDeck);
    std::cout << "-----------------After shuffling-------------------------" << std::endl;
    //print the deck after shuffling
    testingTheDeck.printTheDeck(testingTheDeck.playingDeck);

    std::cout << "-------------------------------" << std::endl;
    std::cout << "The program ends" << std::endl;   
}