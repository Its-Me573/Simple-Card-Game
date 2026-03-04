#include "User.h"

/** Grabs a card from the front of the the deck, removes that card from the deck
 * @param deckOfCards the current deck of cards
 */
void playingUser::grabCardFromDeck(std::vector<Card> &deckOfCards){
    //grab the value of the first index of the vector
    //add the card to the end of the players hand
    usersHand.push_back(deckOfCards[0]);
    //remove the first card from the deckOfCards
    deckOfCards.erase(deckOfCards.begin() + 0);
}

/** return the specified card to the back of the deck
 * remove the card at the index of the user
 * @param deckOfCards the current deck of cards 
 * @param cardToRemove the card which will be removed
 */
void playingUser::returnCardToDeck(std::vector<Card> &deckOfCards, int cardToRemove){
    deckOfCards.push_back(usersHand[cardToRemove-1]);
    usersHand.erase(usersHand.begin() + (cardToRemove-1));
}

/** Returns the string of a single card
 * @param index Index of card being returned
 */
std::string playingUser::getOneCard(int index){
    std::string returnString;
    returnString = returnString + usersHand[index].visualValue;
    returnString = returnString + usersHand[index].suite;
    return returnString;
}

void playingUser::printPlayerHand(){
    std::cout << "Card one: " << getOneCard(0) << std::endl;
    std::cout << "Card two: " << getOneCard(1) << std::endl;
    std::cout << "Card three: " << getOneCard(2) << std::endl;
}