/*
PERFECT NUMBER

Problem statement
You are given an positive integer n. You have to check whether a number is perfect or not.

A perfect number is a positive integer that is equal to the sum of its positive divisors, 
excluding the number itself. For instance, 6 has divisors 1, 2 and 3 (excluding itself), 
and 1 + 2 + 3 = 6, so 6 is a perfect number. Try to use do while loop for completing the task.


Constraints:
The value of n lies in the range: [1, 500]
Time Limit: 1 second 

  
---------------------------------------------------------------------------------------------
Sample Input 1:
6
Sample Output 1:
6 is a perfect number
---------------------------------------------------------------------------------------------



---------------------------------------------------------------------------------------------
Sample Input 2:
23
Sample Output 2:
23 is not a perfect number
---------------------------------------------------------------------------------------------
*/


#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;

    int sum = 0;
    int divisor = 1;

    do {
        if (n % divisor == 0) {
            sum += divisor;
        }
        divisor++;
    } 
	
	while (divisor < n);
    if (sum == n) {
        cout << n << " is a perfect number" << endl;
    } else {
        cout << n << " is not a perfect number" << endl;
    }

    return 0;
}


