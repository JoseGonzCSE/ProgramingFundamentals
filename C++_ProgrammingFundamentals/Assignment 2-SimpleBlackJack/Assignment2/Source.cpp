/* Jose Gonzalez
Assignment 2:This program simulates a simple game of Black Jack

I believe this is very messy and I would appriciate having some feedback to make it not so.
Thank you :)
*/  


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	// initiates variables
	int firstCard, secondCard,drawCard,total;

	int const max_Value = 10;
	int const min_Value = 1;
	int const blackJack = 21;

	char playAgain;
	char draw;

	// initiates the random aspect and begins the game
	unsigned seed = time(0);
	srand(seed);
	cout << "How about we play some BlackJack shall we?\n";

	//do loop to handle Play-Again Functionality
	do{
		
		//Generates the starting hand and calculates the Total
		
		firstCard = (rand() % (max_Value - min_Value + 1)) + min_Value;
		secondCard = (rand() % (max_Value - min_Value + 1)) + min_Value;

		total = firstCard + secondCard;

		/* pushes the hand and total as outputs and asks the user if they would
		 like to draw.
		 
		 if the user types y it will initiate the while loop bellow
		 if not, asks the user if they would like to play again
		 */

		cout << "\nFirst cards: " << firstCard << ", " << secondCard;
		cout << "\nTotal: " << total;
		cout << "\n\n Would you like another card? (y/n)";
		cin >> draw;

		// While loop to generate a new random draw card each time and adds it to Total

		while (draw == 'y'|| draw=='Y' && total<= blackJack) {
			
			drawCard= (rand() % (max_Value - min_Value + 1)) + min_Value;
			cout << "\nCard: " << drawCard;
			
			total = drawCard+total;
			cout << "\nTotal: "<< total;

			if (total > blackJack) {
				cout << "\nSorry thats a bust.";
			}
			else {
				cout << "\n\n Would you like another card? (y/n)";
				cin >> draw;
			}
		}

		cout << "\nWould you like to play again? (y/n)";
		cin >> playAgain;

		//  handles the Play-Again Functionality
	}while (playAgain=='y' || playAgain=='Y');
	
	return 0;
}