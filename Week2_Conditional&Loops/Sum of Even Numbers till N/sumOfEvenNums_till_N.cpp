/*
SUM OF EVEN NUMBERS TILL N

Problem statement
Given a number N, print sum of all even numbers from 1 to N.


------------------------------------------------------------
Sample Input 1 :
 6
Sample Output 1 :
12
------------------------------------------------------------


------------------------------------------------------------
Sample Input 2 :
 7
Sample Output 2 :
12
------------------------------------------------------------
*/



#include<iostream>
using namespace std;


int main(){

	int N;
	cin>>N;

	int sum=0;

	for(int i=2; i<=N; i+=2){
		sum += i;
	}
	cout<<sum;

	return 0;
  
}

