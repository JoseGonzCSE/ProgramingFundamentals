// Jose Gonzalez 9/22/2020 Assignment 5- The League

// This program will record and display league standing for a baseball game

# include<iostream>

using namespace std;
void initializeArrays(string[], int[], int);
void sortData(string[], int[], int);
void displayData(string[], int[], int);


const int size = 5;
int main() {
	
	const int size = 5;
	string team[size];
	int wins[size];

	initializeArrays(team,wins,size);
	sortData(team, wins, size);
	displayData(team, wins, size);



	return 0;
}

// creates an array using user input for the team and their wins
void initializeArrays(string names[], int wins[], int size) {
	int min = 0;
	int max = 162;
	
	cout << " Please enter five teams names and five win amounts\n";
	
	for (int i = 0; i < size; i++) {
		cout << "Enter team #" << i + 1 << ": ";
		cin >> names[i];

		do {

			cout << "Enter the wins for team #" << i + 1 << ": ";
			cin >> wins[i];

			if (wins[i] < min || wins[i]>max) {
				cout << "Please enter a value that is between " << min << " and " << max << " \n";
			}



		} while ((wins[i] < min || wins[i]>max));
			cout << endl;


	}

}
// sorts the data into the team with most wins down to the least by double sorting
void sortData(string names[], int wins[], int size) {

	int start, cont, largest, tempwin;
	string tempName;


	for (int start = 0; start < size - 1; start++)
	{
		 largest = start;

		for (cont = start + 1; cont < size; cont++)
			if (wins[largest] < wins[cont])
				largest = cont;

		if (largest != start)
		{
			 tempwin = wins[start];
			 tempName = names[start];

			wins[start] = wins[largest];
			names[start] = names[largest];

			wins[largest] = tempwin;
			names[largest] = tempName;
		}
	}


}

// displays the data
void displayData(string names[], int wins[], int size) {

	cout << "League Standings: \n";

	for (int i = 0; i < size; i++)
	{
		cout << names[i] << " : " << wins[i] << endl;
	}
}


/*

[jgonz337@hills ~]$ ./a.out
 Please enter five teams names and five win amounts
Enter team #1: Padres
Enter the wins for team #1: 75

Enter team #2: Dodgers
Enter the wins for team #2: 91

Enter team #3: Giants
Enter the wins for team #3: 92

Enter team #4: Rockies
Enter the wins for team #4: 65

Enter team #5: DiamondBacks
Enter the wins for team #5: 70

League Standings:
Giants : 92
Dodgers : 91
Padres : 75
DiamondBacks : 70
Rockies : 65
[jgonz337@hills ~]$
*/