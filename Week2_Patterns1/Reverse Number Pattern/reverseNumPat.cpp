/*
REVERSE NUMBER PATTERN

Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4
1
21
321
4321

  
Constraints
0 <= N <= 50


-----------------------------------------------------------
Sample Input 1:
5
Sample Output 1:
1
21
321
4321
54321
-----------------------------------------------------------


-----------------------------------------------------------
Sample Input 2:
6
Sample Output 2:
1
21
321
4321
54321
654321
-----------------------------------------------------------
*/


#include<iostream>
using namespace std;

int main(){

	int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int j = i; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
  
}

