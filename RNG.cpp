#include "RNG.h"

#include <random>

int RandomNum::randomNumberInRange(int min, int max){
    static std::random_device rand; // obtain a random number from hardware
    static std::mt19937 generator(rand()); // seed the generator
    std::uniform_int_distribution<> distr(min, max);

    return distr(generator);
}




