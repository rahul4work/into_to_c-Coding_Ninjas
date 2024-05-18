/*
REPLACE CHARACTER

Problem statement
Given an input string S and two characters c1 and c2, you need to replace 
every occurrence of character c1 with character c2 in the given string.


Constraints :
1 <= Length of String S <= 10^6



-------------------------------------------------------------------------
Sample Input :
abacd
a x
Sample Output :
xbxcd
-------------------------------------------------------------------------
*/



#include <iostream>
#include <cstring>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) {
    for (int i = 0; input[i] != '\0'; ++i) {
        if (input[i] == c1) {
            input[i] = c2;
        }
    }
}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}


