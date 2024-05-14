/*
STAR PATTERN

Problem statement
Print the following pattern

Pattern for N = 4

   *
  ***
 *****
*******


Hint
As taught in the video, you just have to modify the code so that 
instead of printing numbers, it should output stars ('*').
The dots represent spaces.


Constraints :
0 <= N <= 50


-----------------------------------------------------------------
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
-----------------------------------------------------------------


-----------------------------------------------------------------
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
-----------------------------------------------------------------
*/


#include<iostream>
using namespace std;

int main(){

	int N;
	cin>>N;

	int i = 1;
	while(i<=N) {
		int space = 1;
		while(space<=N-i) {
			cout<<" ";
			space++;
		}
		int star = 1;
		while(star<=i) {
			cout<<"*";
			star++;
		}
		int star2 = 1;
		while(star2<=i-1) {
			cout<<"*";
			star2++;
		}

		i++;
		cout<<endl;
	}
  
}

