//Jose Gonzalez Assignment 11 Number Guesser.h

#ifndef NUMBER_GUESSER_H
#define NUMBER_GUESSER_H

class NumberGuesser {
private:
	int min, max;
	int origionalMin, origionalMax;

public:
	NumberGuesser();
	NumberGuesser(int lowerBound, int upperBound);
	void higher();
	void lower();
	int getCurrentGuess() const;
	void reset();
};
#endif
