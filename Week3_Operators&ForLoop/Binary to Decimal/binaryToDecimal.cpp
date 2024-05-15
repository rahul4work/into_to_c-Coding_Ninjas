/*
BINARY TO DECIMAL

Problem statement
Given a binary number as an integer N, convert it into decimal and print.


Constraints :
0 <= N <= 10^9


-------------------------------------------------------------------------
Sample Input 1 :
1100
Sample Output 1 :
12
-------------------------------------------------------------------------


-------------------------------------------------------------------------
Sample Input 2 :
111
Sample Output 2 :
7
-------------------------------------------------------------------------
*/


#include<iostream>
using namespace std;

int main() {

	int N;
    cin >> N;

    if (N < 0 || N > 1000000000) {
        cout<<endl;
        return 1;
    }

    int decimalResult = 0, base = 1;

    while (N > 0) {
        int lastDigit = N % 10;
        N /= 10;
        decimalResult += lastDigit * base;
        base *= 2;
    }

    cout<< decimalResult <<endl;
	
}


