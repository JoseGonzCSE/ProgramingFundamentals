/* Assignment 0: Jose Gonzalez 
This program prints out as many asteriks as the user wants! Very Cool!
*/

#include <iostream>
using namespace std;

int main()
{
    int count;
    char goAgain = 'y';
    while (goAgain != 'n')
    {
        cout << "How many asterisks?: ";
        cin >> count;
        for (int i = 0; i < count; i++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "Go again? (y/n): ";
        cin >> goAgain;
    }
    return 0;
}

/*

SAMPLE OUTPUT:

How many asterisks?:  5
*****
Go again? (y/n): y
How many asterisks?: 2
**
Go again? (y/n): y
How many asterisks?: 4
****
Go again? (y/n): n
*/