#ifndef RNG
#define RNG

#include <random>

//this class has a single purpose, producing a random number in a specific range for every
//single class in this program
//there will be a single static generator for random numbers with a single seed. it will be public and accesibel to everythin

//constructor will intialize the generator and seed

class RandomNum{
    public:
        static int randomNumberInRange(int min, int max);//returns a random number
};

#endif