#include "Game.h"

void Game::printScreen(){
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Your current cards are: " << std::endl;
    player.printPlayerHand();
}