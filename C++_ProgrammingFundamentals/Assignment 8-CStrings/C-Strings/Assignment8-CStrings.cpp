//Jose Gonzalez Assignment 8: C-Strings
# include<iostream>
#include <cctype>
#include<cstdlib>
#include <cstring>

using namespace std;
int lastIndexOf(char*, char);
void reverse(char*);
int replace(char*, char, char);
int findSubstring(char*, char[]);
bool isPalindrome(char*);



int main() {
	const int MAX_CHARS = 128;
	char firstName[MAX_CHARS] = "Barrack" ;
	char sub[MAX_CHARS] = "Bar";
	char subF[MAX_CHARS] = "lap";

	char palin[MAX_CHARS] = "radar";

	cout << "All is determined by using the string 'Barrack' and 'radar' to proof Palindrome\n";

	cout << "PalinDrome [Barrack vs radar]:\n";
	cout << isPalindrome(firstName) << "\n";
	cout << isPalindrome(palin) << "\n";

	
	cout << "LastIndex[Finding 'c' vs 'l']:\n";
	cout<<lastIndexOf(firstName, 'c')<<"\n";
	cout << lastIndexOf(firstName, 'l') << "\n";

	cout << "Reverse:\n";
	reverse(firstName);
	cout << firstName << "\n";
	reverse(firstName);
	cout << firstName << "\n";

	cout << "Replacements[ B to V, L to P, then V to B]:\n";
	cout<<replace(firstName, 'B', 'V') << "\n";
	cout << firstName << "\n";
	cout << replace(firstName, 'l', 'p') << "\n";
	cout << firstName << "\n";
	cout << replace(firstName, 'V', 'B') << "\n";
	cout << firstName << "\n";

	cout << "Finding Substrings[Finding 'Bar' vs 'Lap'] :\n";
	cout << findSubstring(firstName, sub) << "\n";
	cout << findSubstring(firstName, subF) << "\n";

	
	

	return 0;
}

int lastIndexOf(char* s, char target) {

	bool target2 = false;
	int list = -1;

	if (s != nullptr) {
		list = strlen(s) - 1;
		while (list >= 0 && !target2) {
			if (s[list] == target) {
				target2 = true;
			}
			else {
				list--;
			}
		}
	}return list;
}

void reverse(char* s) {
	if (s != nullptr) {
		int length = strlen(s);
		int count = 0;
		for (count; count < length / 2 - 1; count++) {
			char throwAway = s[count];
			s[count] = s[length - 1 - count];
			s[length - 1 - count] = throwAway;
		}
	}
}

int replace(char* s, char target, char replacementChar) {
	int replace = 0;
	int count = 0;
	if (s != nullptr) {
		for (count;count<(int)strlen(s);count++)
			if (s[count] == target) {
				s[count] = replacementChar;
				replace++;
			}
	}
	return replace;
}
int findSubstring(char* s, char substring[]) {
	
	int list = 0;
	int count = 0;
	int point = -1;
	int lengthSub = strlen(substring);

	while (s[list] != '\0' && point==-1) {
		if (s[list] == substring[0]) {
			for (count; count < strlen(substring); count++) {
				if (s[list + count] != '\0' && s[list + count] == substring[count])
					lengthSub--;
				else if (s[list + count] == '\0')
					lengthSub++;
			}if (lengthSub == 0)
				point = list;
		}point++;
	}
	return point;

}
bool isPalindrome(char* s) {

	bool isPalindrome = true;
	if (s != nullptr)
	{
		bool end = false;
		int count = 0;
		int length = strlen(s);
		while (count <= length / 2 - 1 && !end) {
			if (s[count] != s[length - 1 - count]) {
				isPalindrome = false;
				end = true;
			}
			else
				count++;
		}
	}
	return isPalindrome;
}

/*

[jgonz337@hills ~]$ ./a.out
All is determined by using the string 'Barrack' and 'radar' to proof Palindrome
PalinDrome [Barrack vs radar]:
0
1
LastIndex[Finding 'c' vs 'l']:
5
-1
Reverse:
kcrraaB
Barrack
Replacements[ B to V, L to P, then V to B]:
1
Varrack
0
Varrack
1
Barrack
Finding Substrings[Finding 'Bar' vs 'Lap'] :
1
0
[jgonz337@hills ~]$

*/