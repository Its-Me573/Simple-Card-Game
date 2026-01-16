#include "Player.h"
#include "Cards.h"
#include <vector>
#include <string>

PlayingUser::PlayingUser(){
    //the 3 cards the player has at one time
    std::vector<Card> playersCardsInHand;
    playersCardsInHand.push_back(Card());
    playersCardsInHand.push_back(Card());
    playersCardsInHand.push_back(Card());
}