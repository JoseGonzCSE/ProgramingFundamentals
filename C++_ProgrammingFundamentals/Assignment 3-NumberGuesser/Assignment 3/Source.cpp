// Assignment 3: Number Guesser Jose Gonzalez 9/8/2020

#include <iostream>

using namespace std;
void playOneGame();
bool shouldPlayAgain();
char getUserResponseToGuess(int);
int getMidpoint(int, int);

int main() {
	do {
		playOneGame();
	} while (shouldPlayAgain());

	return 0;
}
// Actual Game 
void playOneGame() {
	
	int low = 0;
	int high = 100;
	int guess;
	char response;
	
	cout << "Think of a number between 1 and 100.\n"
		<< "h= higher | l= lower | c= correct ";
	do {
		guess = getMidpoint(low, high);
		response = getUserResponseToGuess(guess);

		if (response == 'h') {
			low = guess+1;
		}
		else if (response == 'l') {
			high = guess;
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
char getUserResponseToGuess(int guess) {
	
	char response;

	cout << "\nis it " << guess << "? (h/l/c):";
	cin >> response;
	
	if (response == 'h' || response == 'l' || response == 'c')
		return response;
	else
		cout << "Please enter a valid response.\n";

}
// calculates the midpoint of two points
int getMidpoint(int low, int high) {
	int midpoint = ((low + high) / 2);
	return midpoint;

}
/* SAMPLE OUTPUT

Think of a number between 1 and 100.
h= higher | l= lower | c= correct
is it 50? (h/l/c):h

is it 75? (h/l/c):h

is it 88? (h/l/c):l

is it 82? (h/l/c):l

is it 79? (h/l/c):h

is it 81? (h/l/c):c
Would you like to play again (y/n)y
Think of a number between 1 and 100.
h= higher | l= lower | c= correct
is it 50? (h/l/c):l

is it 25? (h/l/c):h

is it 38? (h/l/c):l

is it 32? (h/l/c):h

is it 35? (h/l/c):h

is it 37? (h/l/c):c
Would you like to play again (y/n)n

*/