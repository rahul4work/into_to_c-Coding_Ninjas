/*
INTRESTING ALPHABETS

Problem statement
Print the following pattern for the given number of rows.

Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

Constraints
0 <= N <= 26


--------------------------------------------------------
Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
--------------------------------------------------------


--------------------------------------------------------
Sample Input 2:
7
Sample Output 2:
G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG
--------------------------------------------------------
*/


#include<iostream>
using namespace std;


int main() {
  
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        char currentChar = 'A' + N - 1 - i;

        for (int j = 0; j <= i; ++j) {
            cout << currentChar;
            currentChar++;
        }

        cout << endl;
    }

    return 0;
    
}

