# include<iostream>
#include <cctype>

using namespace std;
bool test(char[], int);



int main() {
	const int size = 10;
	char login[size];

	cout << "Enter a valid Hills initial password ";
	cin.getline(login, size);

	if (test(login, size))
		cout << "This is a valid Hills initial Password";
	else {
		cout << "This is not a valid Hills password. Here is an Example:\n";
		cout << "Case Sensitive: mar2454.jl";
	}


	return 0;
}

bool test(char login[], int size) {
	int count;
	for (count = 0; count < 3; count++) {
		if (!islower(login[count]))
			return false;
	}
	for (count = 3; count < 7; count++) {
		if (!isdigit(login[count]))
			return false;
	}
	for (count = 7; count < 8; count++) {
		if (login[count] != '.')
			return false;
	}
	for (count = 8; count < size - 1; count++) {
		if (!islower(login[count]))
			return false;
	}
	return true;
}