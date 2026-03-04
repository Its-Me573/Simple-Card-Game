#include "Game.h"
#include <iostream>

int main(){
    Game simpleGame;
    simpleGame.cards.CardShuffling(simpleGame.cards.playingDeck);

    simpleGame.player.grabCardFromDeck(simpleGame.cards.playingDeck);
    simpleGame.player.grabCardFromDeck(simpleGame.cards.playingDeck);
    simpleGame.player.grabCardFromDeck(simpleGame.cards.playingDeck);

    simpleGame.house.grabCardFromDeck(simpleGame.cards.playingDeck);
    simpleGame.house.grabCardFromDeck(simpleGame.cards.playingDeck);
    simpleGame.house.grabCardFromDeck(simpleGame.cards.playingDeck);

    simpleGame.printScreen();
}