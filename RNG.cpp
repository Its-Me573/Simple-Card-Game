#include "RNG.h"

#include <random>

/** Creates a random number from a generator and a random seed and
 * return the number in a uniform distribution
 * @param min the minimum bound of the range, inclusive
 * @param max the maximum bound of the range, inclusive 
 * @return a random number in range of min an max
 */
int RandomNum::randomNumberInRange(int min, int max){
    static std::random_device rand; // obtain a random number from hardware
    static std::mt19937 generator(rand()); // seed the generator
    std::uniform_int_distribution<> distr(min, max);

    return distr(generator);
}




