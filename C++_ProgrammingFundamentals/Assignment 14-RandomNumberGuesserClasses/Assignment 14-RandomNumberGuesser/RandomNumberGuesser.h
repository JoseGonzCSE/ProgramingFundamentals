//Jose Gonzalez Assignment 14 Random number Guesser
#ifndef Random_Number_Guesser_H
#define Random_Number_Guesser_H
#include "NumberGuesser.h"

class RandomNumberGuesser :public NumberGuesser {
private:
	int random;
protected:
	int final;
public:
	RandomNumberGuesser(int, int);
	virtual void reset();
	virtual int getCurrentGuess();


};



#endif

