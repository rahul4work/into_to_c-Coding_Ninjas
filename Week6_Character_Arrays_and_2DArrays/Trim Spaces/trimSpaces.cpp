/*
TRIM SPACES

Problem statement
Given an input string S that contains multiple words, you need 
to remove all the spaces present in the input string.

There can be multiple spaces present after any word.


Constraints :
1 <= Length of string S <= 10^6



--------------------------------------------------------------
Sample Input :
abc def g hi
Sample Output :
abcdefghi
--------------------------------------------------------------
*/


#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
    int i = 0, j = 0;

    while (input[i]) {
        if (input[i] != ' ') {
            input[j++] = input[i];
        }
        i++;
    }
    input[j] = '\0';
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

