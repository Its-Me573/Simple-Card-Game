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