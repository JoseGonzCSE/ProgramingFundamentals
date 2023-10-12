// Jose Gonzalez Assignment 11 NumberGuesser.cpp

#include "NumberGuesser.h"
#include <iostream>

using namespace std;

NumberGuesser::NumberGuesser() {
	min = 1;
	max = 100;
}

NumberGuesser::NumberGuesser(int lowerBound, int upperBound) {
	//This Line of code flips the min and the max if user has the input min to be > than the input max
	if (lowerBound <= upperBound) {
		min = lowerBound;
		max = upperBound;
		origionalMin = lowerBound;
		origionalMax = upperBound;
	}
	else {
		min = upperBound;
		max = lowerBound;
		origionalMin = upperBound;
		origionalMax = lowerBound;
	}
}


void NumberGuesser::higher() {
	min = getCurrentGuess() + 1;
}
void NumberGuesser::lower() {
	max = getCurrentGuess() - 1;
}

int NumberGuesser::getCurrentGuess() const {
	return ((min + max) / 2);
}

void NumberGuesser::reset() {
	min = origionalMin;
	max = origionalMax;
}