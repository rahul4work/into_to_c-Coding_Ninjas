/*
CHARACTER PATTERN

Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4
A
BC
CDE
DEFG

  
Constraints
0 <= N <= 13


-----------------------------------------------------------
Sample Input 1:
5
Sample Output 1:
A
BC
CDE
DEFG
EFGHI
-----------------------------------------------------------


-----------------------------------------------------------
Sample Input 2:
6
Sample Output 2:
A
BC
CDE
DEFG
EFGHI
FGHIJK
-----------------------------------------------------------
*/


#include<iostream>
using namespace std;

int main(){

	int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        char currentChar = 'A' + i;

        for (int j = 0; j <= i; ++j) {
            cout << currentChar;
            currentChar++;
        }

        cout << endl;
    }

    return 0;
  
}

