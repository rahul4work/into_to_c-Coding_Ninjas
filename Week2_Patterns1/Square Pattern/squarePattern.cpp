/*
SQUARE PATTERN

Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4
4444
4444
4444
4444

Constraints
0 <= N <= 50


------------------------------------------------------------
Sample Input 1:
7
Sample Output 1:
7777777
7777777
7777777
7777777
7777777
7777777
7777777
------------------------------------------------------------


------------------------------------------------------------
Sample Input 2:
6
Sample Output 2:
666666
666666
666666
666666
666666
666666
------------------------------------------------------------
*/


#include<iostream>
using namespace std;

int main(){

	int N;
	cin>>N;

	if(N!=0) {
		for (int i = 1; i <= N; ++i) {

            for (int j = 1; j <= N; ++j) {
                cout << N;
            }
            cout << endl;
        }
    }

    return 0;
  
}



