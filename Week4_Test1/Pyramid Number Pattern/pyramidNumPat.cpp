/*
PYRAMID NUMBER PATTERN

level:moderate  
  
Problem statement
Print the following pattern for the given number of rows.

Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines


--------------------------------------------------------
Sample Input :
5
Sample Output :
    1
   212
  32123
 4321234
543212345
--------------------------------------------------------
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
      spaces = spaces+1;
    }
    int num = i;
    while(num>=1) {
      cout<<num;
      num = num-1;
    }
    int num2= 2;
    while(num2<=i) {
      cout<<num2;
      num2 = num2+1;
    }

    i = i+1;
    cout<<endl;
  }

}

