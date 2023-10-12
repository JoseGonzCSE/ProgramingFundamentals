#pragma warning(disable : 4996)
#include<iostream>
#include <cstring>
using namespace std;


char* dup(char* str) {
     int length = strlen(str);

     char* dup = NULL;
     dup = new char[length];

     strcpy(dup, str);

    char* Result = strcat(dup, str);
    return Result;
    
}

int main() {
    char array[] = "hello";
    char *test = array;
    cout<<dup(test);
   
    return 0;
}




