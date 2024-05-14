/*
DIAMOND OF STARS

Problem statement
Print the following pattern for the given number of rows.

Note: N is always odd.


Pattern for N = 5

  *
 ***
*****
 ***
  *


Constraints :
1 <= N <= 49


---------------------------------------------------------
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
---------------------------------------------------------


---------------------------------------------------------
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
---------------------------------------------------------
*/


#include<iostream>
using namespace std;

int main() {

    int N;
    cin>>N;
    for (int i = 1; i <= N / 2; ++i) {
        for (int j = 1; j <= N / 2 - i + 1; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }
        cout <<endl;
    }

    for (int i = 1; i <= N; ++i) {
        cout << "*";
    }
    cout <<endl;

    for (int i = N / 2; i >= 1; --i) {
        for (int j = 1; j <= N / 2 - i + 1; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }
        cout <<endl;
    }

    for (int i = 1; i <= N / 2; ++i) {
        cout << " ";
    }

}
