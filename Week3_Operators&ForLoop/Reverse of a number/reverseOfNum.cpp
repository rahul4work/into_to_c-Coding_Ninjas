/*
REVERSE OF A NUMBER

Problem statement
Write a program to generate the reverse of a given number N. Print the 
corresponding reverse number.

Note : If a number has trailing zeros, then its reverse will not include them.
For e.g., reverse of 10400 will be 401 instead of 00401.

Constraints:
0 <= N < 10^8


------------------------------------------------------------------------------
Sample Input 1 :
1234
Sample Output 1 :
4321
------------------------------------------------------------------------------


------------------------------------------------------------------------------
Sample Input 2 :
1980
Sample Output 2 :
891
------------------------------------------------------------------------------
*/


#include<iostream>
using namespace std;

int main() {

	int N;
    cin >> N;

    if (N < 0 || N >= 100000000) {
        cout<<endl;
        return 1;
    }

    int reverseNumber = 0;

    while (N > 0) {
        int lastDigit = N % 10;
        reverseNumber = reverseNumber * 10 + lastDigit;
        N /= 10;
    }

    cout<< reverseNumber <<endl;
	
}

