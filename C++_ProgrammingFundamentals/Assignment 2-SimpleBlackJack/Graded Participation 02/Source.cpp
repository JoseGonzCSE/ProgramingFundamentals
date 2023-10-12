// This program will show which of the two teams won the game 

#include<iostream>
using namespace std;

int main() {
	
	int home, away;
	char goAgain;
	
	do
	{
			// Gets user input on scores, if it is less than 0 asks to re-input the number
			cout << "Please enter the Home team score: ";
			cin >> home;
			while (home < 0) {
				cout << "Please enter a positive number instead";
					cin >> home;
			}

			cout << "\nPlease enter the Away team score: ";
			cin >> away;
			while (away < 0) {
				cout << "Please enter a positive number instead: ";
				cin >> away;
			}

		// displays user input
		cout << "\nHome Team Score: " << home; 
		cout << "\nAway Team Score: " << away;

		// determines which team won, or tied, and displays the winner
		if (home > away) {
			cout << "\nHome Team won!";
		}
		else if (home < away) {
			cout << "\nAway Team won!";
		}
		else {
			cout << "\nBoth teams Tied";
		}

		cout << "\nPress y to go again or press anything else to finish.";
		cin >> goAgain;

		// asks the user if they would like to go again.
	} while (goAgain == 'y' || goAgain == 'Y');

	return 0;
}