//Jose Gonzalez Assignment 14 Random number Guesser

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "RandomNumberGuesser.h"


RandomNumberGuesser::RandomNumberGuesser(int lower, int upper) : NumberGuesser(lower, upper)
{
	random = time(0);
	srand(random);
	final = (rand() % (high - low + 1)) + low;

}


int RandomNumberGuesser::getCurrentGuess()
{
	if (random < low || random > high)
		random = (rand() % (high - low + 1)) + low;


	return random;
}

void RandomNumberGuesser::reset()
{
	low = originalLow;
	high = originalHigh;
	final = (rand() % (high - low + 1)) + low;

}