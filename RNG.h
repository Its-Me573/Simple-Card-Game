#ifndef RNG
#define RNG

#include <random>

/**
 * @class RandomNum 
 * Class with a single function that returns a random number in range, inclusive
 */
class RandomNum{
    
    public:
        static int randomNumberInRange(int min, int max);//returns a random number
};

#endif