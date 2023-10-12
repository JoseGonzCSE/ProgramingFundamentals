// Jose Gonzalez Assignment 9- The League with Structs

// This program will record and display league standing for a baseball game

#include<iostream>
#include<cstring>

using namespace std;
struct WinRecord {
	int wins;
	char* name;
};

// Obtained from Professor 
char* getLine()
{
	const int BUFFER_SIZE = 1000;

	// Allocate a buffer local to this function
	char buffer[BUFFER_SIZE];

	// Use cin.getline() to input the buffer from the user
	cin.getline(buffer, BUFFER_SIZE);

	// Find the length of the string in buffer
	int length = strlen(buffer);

	// Dynamically allocate an array, to be returned
	char* rValue = new char[length + 1];

	// Copy the string into the dynamically allocated array
	strncpy(rValue, buffer, length);

	// Return the address of the dynamically allocated array
	return rValue;
}


void initializeData(WinRecord*, int);
void sortData(WinRecord*, int);
void displayData(WinRecord*, int);


int main() {
	WinRecord* league = NULL;
	int size = 0;
	
	do {
		cout << "How many teams will you enter?\n";
		cin >> size;
	} while (size <= 0);

	cin.ignore();
	league = new WinRecord[size];
	
	initializeData(league, size);
	sortData(league,  size);
	displayData(league,  size);

	delete [] league;
	league = NULL;
	
	return 0;
}

// creates an array using user input for the team and their wins
void initializeData(WinRecord* standings, int size) {
	
	for (int i = 0; i < size; i++) {
		cout << "Enter team #" << i + 1 << ": ";
		standings[i].name=getLine();

		cout << "Enter the wins for team #" << i + 1 << ": ";
		cin >> standings[i].wins;
		cin.ignore();
		cout << endl;
	}

}
// sorts the data into the team with most wins down to the least by double sorting
void sortData(WinRecord* standings, int size) {

	int start, cont, largest, tempwin;
	char* tempName;
	bool sort;


	do {
		 sort = false;
		for ( start = 0; start < size - 1; start++)
		{
			largest = start;

			for (cont = start + 1; cont < size; cont++)
				if (standings[largest].wins < standings[cont].wins)
					largest = cont;

			if (largest != start)
			{
				tempwin = standings[start].wins;
				tempName = standings[start].name;

				standings[start].wins = standings[largest].wins;
				standings[start].name = standings[largest].name;

				standings[largest].wins = tempwin;
				standings[largest].name = tempName;
				sort = true;
			}
		}
	} while (sort);
	
}

// displays the data
void displayData(WinRecord* standings, int size) {
	
	cout << "League Standings: \n";

	for (int i = 0; i < size; i++)
	{
		cout << standings[i].name << " : " << standings[i].wins << endl;
	}
}

/*
[jgonz337@hills ~]$ ./a.out
How many teams will you enter?
3
Enter team #1: Pablos
Enter the wins for team #1: 7

Enter team #2: Knicks
Enter the wins for team #2: 2

Enter team #3: Tims
Enter the wins for team #3: 5

League Standings:
Pablos : 7
Tims : 5
Knicks : 2
[jgonz337@hills ~]$


*/