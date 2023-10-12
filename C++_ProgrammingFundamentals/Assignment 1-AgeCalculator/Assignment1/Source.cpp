/* Jose Gonzalez 8/27/2020
This program will ask the user for their age and then deduce if they are a
child, teen, adult,or retired
*/

#include <iostream>

using namespace std;

int main() 
{
	int age;

	// sets up the question and puts the user input into the variable age
	cout << "This program will determine your stage in life.\n";
	cout << "Please enter your age: ";
	cin >> age;

	// determines what age group the person is in or throws an error
	if (age >= 0 && age <= 12)
		cout << "\nYou are a child. Keep it up!";
	else if (age >= 13 && age <= 17)
		cout << "\nYou are a Teen. Don't be afraid.";
	else if (age >= 18 && age <= 64)
		cout << "\nYou are an Adult. Keep on Adulting.";
	else if (age >= 65 && age <= 120)
		cout << "\nYou are a retiree, Relax.";
	else
	{
		cout << "\nPlease enter a valid age. You can't be less than 0 ";
		cout << "or older than 120[for now].";
	}

	return 0;
}