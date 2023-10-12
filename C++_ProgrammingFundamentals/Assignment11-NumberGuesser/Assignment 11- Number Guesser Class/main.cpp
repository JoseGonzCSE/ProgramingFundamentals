// Assignment 11: Number Guesserclass Main() Jose Gonzalez 11/7/2020

#include <iostream>
#include "NumberGuesser.h"

using namespace std;
void playOneGame(NumberGuesser&);
bool shouldPlayAgain();
char getUserResponseToGuess(NumberGuesser);


int main() {
	do {
		int min, max;
		cout << "Enter a minimum value\n";
		cin >> min;
		cout << "Enter a maximum value\n";
		cin >> max;

		NumberGuesser Game = NumberGuesser(min,max);
		playOneGame(Game);
		Game.reset();
	} while (shouldPlayAgain());
	return 0;
}
// Actual Game 
void playOneGame(NumberGuesser &Game) {
	char response;
	cout << "\nGreat! Now think of a number between those two points!\n"
		<< "h= higher | l= lower | c= correct ";
	do {

		response = getUserResponseToGuess(Game);

		if (response == 'h') {
			Game.higher();
		}
		else if (response == 'l') {
			Game.lower();
		}
	} while (response != 'c');

}
// determines if the play wants to play again
bool shouldPlayAgain() {
	char playagain;
	cout << "Would you like to play again (y/n)";
	cin >> playagain;

	if (playagain == 'y' || playagain == 'Y')
		return true;
	else
		return false;

}
//gets user response to the guess 
char getUserResponseToGuess(NumberGuesser guess) {

	char response;

	cout << "\nis it " << guess.getCurrentGuess() << "? (h/l/c):";
	cin >> response;

	if (response == 'h' || response == 'l' || response == 'c')
		return response;
	else
		cout << "Please enter a valid response.\n";

}

/*
[jgonz337@hills ~]$ ./a.out
Enter a minimum value
1
Enter a maximum value
100

Great! Now think of a number between those two points!
h= higher | l= lower | c= correct
is it 50? (h/l/c):h

is it 75? (h/l/c):h

is it 88? (h/l/c):l

is it 81? (h/l/c):l

is it 78? (h/l/c):c
Would you like to play again (y/n)y
Enter a minimum value
25
Enter a maximum value
35

Great! Now think of a number between those two points!
h= higher | l= lower | c= correct
is it 30? (h/l/c):h

is it 33? (h/l/c):l

is it 31? (h/l/c):c
Would you like to play again (y/n)n
[jgonz337@hills ~]$

*/