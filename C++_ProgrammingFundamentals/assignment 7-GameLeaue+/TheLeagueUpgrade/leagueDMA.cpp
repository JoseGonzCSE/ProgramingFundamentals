// Jose Gonzalez Assignment 7- The League with DMA

// This program will record and display league standing for a baseball game

# include<iostream>

using namespace std;
void initializeArrays(string[], int[], int);
void sortData(string[], int[], int);
void displayData(string[], int[], int);



int main() {

	 int size =0;
	 do {
		 cout << "How many teams will you enter?\n";
		 cin >> size;
	 } while (size <= 0);
	
	string* team = new string[size];
	int* wins = new int[size];

	initializeArrays(team, wins, size);
	sortData(team, wins, size);
	displayData(team, wins, size);

	delete[] team;
	team = NULL;
	delete[]wins;
	wins = NULL;


	return 0;
}

// creates an array using user input for the team and their wins
void initializeArrays(string names[], int wins[], int size) {
	int min = 0;
	int max = 162;

	cout << " Please enter "<< size<<" teams names and " << size<< " win amounts\n";

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
[jgonz337@hills ~]$ [jgonz337@hills ~]$ g++ league.cpp
[jgonz337@hills ~]$ ./a.out
How many teams will you enter?
4
 Please enter 4 teams names and 4 win amounts
Enter team #1: padres
Enter the wins for team #1: 75

Enter team #2: Dodgers
Enter the wins for team #2: 91

Enter team #3: Giants
Enter the wins for team #3: 92

Enter team #4: Cubs
Enter the wins for team #4: 65

League Standings:
Giants : 92
Dodgers : 91
padres : 75
Cubs : 65
[jgonz337@hills ~]$


*/