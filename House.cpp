#include "House.h"
#include "Cards.h"
#include <vector>
#include <string>

PlayingHouse::PlayingHouse(){
    //the 3 cards the player has at one time
    std::vector<Card> HouseCardsInHand;
    HouseCardsInHand.push_back(Card());
    HouseCardsInHand.push_back(Card());
    HouseCardsInHand.push_back(Card());
}   