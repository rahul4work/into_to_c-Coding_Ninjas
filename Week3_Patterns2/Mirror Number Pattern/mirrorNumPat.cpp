/*
MIRROR NUMBER PATTERN

Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4

   1
  12
 123
1234

  
Constraints
0 <= N <= 50


-----------------------------------------------------------
Sample Input 1:
3
Sample Output 1:
    1 
   12
  123
-----------------------------------------------------------


-----------------------------------------------------------
Sample Input 2:
4
Sample Output 2:
   1 
  12
 123
1234
-----------------------------------------------------------
*/



#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;

    int i = 1;
    while(i<=N) {
        int spaces = 1;
        while(spaces<=N-i) {
            cout<<" ";
            spaces++;
            }

        int num = 1;
        while(num<=i) {
            cout<<num;
            num++;   
        }
        cout<<endl;
        i++;
    }
  
}


