/*
NUMBER STAR PATTERN

level:moderate


Problem statement
Print the following pattern for given number of rows.

Input format :

Line 1 : N (Total number of rows)


----------------------------------------------------
Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
----------------------------------------------------
*/


#include<iostream>
using namespace std;

int main(){

  int N;
  cin>>N;

  int i= 1;
  while(i<=N){
    int num1 = 1;
    while(num1 <= N-i+1 ) {
      cout<<num1;
      num1++;
    }
    int stars = 1;
    while(stars <= 2*(i-1) ) {
      cout<<"*";
      stars++;
    }
    int num2 = N-i+1;
    while(num2>=1) {
      cout<<num2;
      num2--;
    }

    i++;
    cout<<endl;
  }

}


