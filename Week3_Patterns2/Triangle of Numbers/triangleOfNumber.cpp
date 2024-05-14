/*
TRIANGLE OF NUMBER

Problem statement
Print the following pattern for the given number of rows.

Pattern for N = 4


   1
  232
 34543
4567654


Constraints :
0 <= N <= 50


----------------------------------------------------------
Sample Input 1:
5
Sample Output 1:
           1
          232
         34543
        4567654
       567898765
----------------------------------------------------------


----------------------------------------------------------
Sample Input 2:
4
Sample Output 2:
           1
          232
         34543
        4567654
----------------------------------------------------------
*/



#include <iostream>
using namespace std;

int main() {

    int N;
    cin>>N;

    for(int i = 1; i<=N; i++) {
        for(int spaces = 1; spaces<=N-i; spaces++){
            cout<<" ";
        }
        for(int num = i; num <= 2 * i - 1; num++) {
            cout << num ;
        }
        for (int num2 = 2 * i - 2; num2 >= i; num2--) {
            cout << num2 ;
        }
        cout<<endl;
    }

    return 0;
}
