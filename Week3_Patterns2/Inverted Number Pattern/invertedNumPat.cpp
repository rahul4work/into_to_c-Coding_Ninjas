/*
INVERTED NUMBER PATTERN

Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4
4444
333
22
1

Constraints :
0 <= N <= 50


----------------------------------------------------------
Sample Input 1:
5
Sample Output 1:
55555 
4444
333
22
1
----------------------------------------------------------


----------------------------------------------------------
Sample Input 2:
6
Sample Output 2:
666666
55555 
4444
333
22
1
----------------------------------------------------------
*/



#include<iostream>
using namespace std;

int main(){

	int N;
	cin>>N;

	int i = 1;
	while(i<= N) {
		int j = 1;
		int k=N-i+1;
		while(j<= k) {
			cout<<k;
			j++;
		}
		cout<<endl;
		i++;
	}
  
}


