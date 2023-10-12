// Assignment 4- Poker Hands Jose Gonzalez 9/19/2020

#include <iostream>

using namespace std;

bool containsPair(int[]);
bool containsTwoPair(int[]);
bool containsThreeOfaKind(int[]);
bool containsStraight(int[]);
bool containsFullHouse(int[]);
bool containsFourOfaKind(int[]);
void Order(int[]);

const int min = 2;
const int max = 9;
const int maxCards = 5;
int playerHand[maxCards];

int main() {

	const int maxCards = 5;
	const int min = 2;
	const int max = 9;
	int playerHand[maxCards];

	// gets user input and puts it in an array 
	cout << "Enter five numeric cards, no face cards. USE 2-9, card input will repeat until you insert a proper value.\n";

	for (int i = 0; i < maxCards; i++) {
		do {
			cout << "\nCard " << i + 1 << " :";

			cin >> playerHand[i];
		} while ((playerHand[i]< min || playerHand[i]>max));
	}
	// sorts array in order
	Order(playerHand);

	// calculates what the value of array is
	if (containsFourOfaKind(playerHand))
		cout << "FourOfaKind";
	else if (containsFullHouse(playerHand))
		cout << "FullHouse!";
	else if (containsStraight(playerHand))
		cout << "Straight!";
	else if (containsThreeOfaKind(playerHand))
		cout << "Three of a Kind!";
	else if (containsTwoPair(playerHand))
		cout << "Two Pairs!";
	else if (containsPair(playerHand))
		cout << "Pair!";
	else
		cout << "HighCard!";

	return 0;
}


bool containsPair(int hand[]) {

	bool isPair = false;

	if (hand[0] == hand[1]|| hand[1] == hand[2]|| hand[2] == hand[3]|| hand[3] == hand[4])
		isPair = true;
	
	return isPair;
	
}

bool containsTwoPair(int hand[]) {

	bool pair = false;

	if (hand[0] == hand[1] && hand[2] == hand[3])
		pair = true;
	else if (hand[0] == hand[1] && hand[3] == hand[4])
		pair = true;
	else if (hand[1] == hand[2] && hand[3] == hand[4])
		pair = true;

	return pair;

}

bool containsThreeOfaKind(int hand[]) {
	
	bool threeOfKind = false;
	if (hand[0] == hand[1] && hand[0] == hand[2])
		threeOfKind = true;
	if (hand[1] == hand[2] && hand[1] == hand[3])
		threeOfKind = true;
	if (hand[2] == hand[3] && hand[2] == hand[4])
		threeOfKind = true;
	return threeOfKind;
}

bool containsStraight(int hand[]) {
	if (hand[1] == (hand[0] + 1) && hand[2] == (hand[1] + 1) && hand[3] == (hand[2] + 1) && hand[4] == (hand[3] + 1))
		return true;
	else
		return false;

}

bool containsFullHouse(int hand[]) {
	if (hand[0] == hand[1] && hand[2] == hand[3] && hand[2] == hand[4])
		return true;
	else if (hand[0] == hand[1] && hand[0] == hand[2] && hand[3] == hand[4])
		return true;
	else
		return false;
}

bool containsFourOfaKind(int hand[]) {
	if (hand[0] == hand[1] && hand[0] == hand[2] && hand[0] == hand[3])
		return true;
	else if (hand[1] == hand[2] && hand[2] == hand[3] && hand[3] == hand[4])
		return true;
	else
		return false;
}
// puts array in order
void Order(int hand[]) {
	for (int i = 0; i < maxCards - 1; i++) {
		for(int k=i+1;k<maxCards;k++)
			if (hand[k] < hand[i]) {
				int sort = hand[i];
				hand[i] = hand[k];
				hand[k] = sort;
			}
	}
}

/*

[jgonz337@hills ~]$ ./a.out
Enter five numeric cards, no face cards. USE 2-9, card input will repeat until you insert a proper value.

Card 1 :2

Card 2 :5

Card 3 :3

Card 4 :8

Card 5 :7
HighCard![jgonz337@hills ~]$ ./a.out
Enter five numeric cards, no face cards. USE 2-9, card input will repeat until you insert a proper value.

Card 1 :2

Card 2 :5

Card 3 :3

Card 4 :5

Card 5 :7
Pair![jgonz337@hills ~]$ ./a.out
Enter five numeric cards, no face cards. USE 2-9, card input will repeat until you insert a proper value.

Card 1 :2

Card 2 :5

Card 3 :3

Card 4 :5

Card 5 :3
Two Pairs![jgonz337@hills ~]$ ./a.out
Enter five numeric cards, no face cards. USE 2-9, card input will repeat until you insert a proper value.

Card 1 :5

Card 2 :5

Card 3 :3

Card 4 :5

Card 5 :7
Three of a Kind![jgonz337@hills ~]$ ./a.out
Enter five numeric cards, no face cards. USE 2-9, card input will repeat until you insert a proper value.

Card 1 :3

Card 2 :4

Card 3 :5

Card 4 :6

Card 5 :7
Straight![jgonz337@hills ~]$ ./a.out
Enter five numeric cards, no face cards. USE 2-9, card input will repeat until you insert a proper value.

Card 1 :5

Card 2 :7

Card 3 :5

Card 4 :7

Card 5 :7
FullHouse![jgonz337@hills ~]$ ./a.out
Enter five numeric cards, no face cards. USE 2-9, card input will repeat until you insert a proper value.

Card 1 :2

Card 2 :5

Card 3 :5

Card 4 :5

Card 5 :5
FourOfaKind[jgonz337@hills ~]$

*/