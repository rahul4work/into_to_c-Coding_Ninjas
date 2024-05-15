/*
DECIMAL TO BINARY

Problem statement
Given a decimal number (integer N), convert it into binary and print.

Note for C++ coders:
Do not use the inbuilt implementation of "pow" function. The implementation 
of that function is done for 'double's and it may fail when used for 'int's, 
'long's, or 'long long's. Implement your own "pow" function to work for
non-float data types. 
The given input number could be large, so the corresponding binary number 
can exceed the integer range. So you may want to take the answer as long for
CPP and Java. 


Constraints :
0 <= N <= 10^5


----------------------------------------------------------------------------
Sample Input 1 :
12
Sample Output 1 :
1100
----------------------------------------------------------------------------


----------------------------------------------------------------------------
Sample Input 2 :
7
Sample Output 2 :
111
----------------------------------------------------------------------------


----------------------------------------------------------------------------
Sample Input 3 :
0
Sample Output 3 :
0
----------------------------------------------------------------------------
*/


#include <iostream>
using namespace std;

long long power(int base, int exponent) {
    long long result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int main() {
    int N;
    cin >> N;

    if (N < 0 || N > 100000) {
        cout<<endl;
        return 1;
    }

    long long binaryResult = 0;
    int i = 0;

    while (N > 0) {
        int digit = N % 2;
        binaryResult += digit * power(10, i);
        N /= 2;
        ++i;
    }

    cout<< binaryResult <<endl;

    return 0;
}
