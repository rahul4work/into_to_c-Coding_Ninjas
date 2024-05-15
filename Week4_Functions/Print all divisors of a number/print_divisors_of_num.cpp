/*
PRINT ALL DIVISORS OF A NUMBER

Problem statement
Given an integer ‘N’, your task is to write a program that returns
all the divisors of ‘N’ in ascending order.

For example:
'N' = 5.
The divisors of 5 are 1, 5.

Constraints :
1 <= 'N' <= 10^5 
  

------------------------------------------------------------------
Sample Input 1 :
10
Sample Output 1 :
1 2 5 10
------------------------------------------------------------------


------------------------------------------------------------------
Sample Input 2 :
6
Sample Output 2 :
1 2 3 6
------------------------------------------------------------------
*/


#include <iostream>
#include <algorithm>
using namespace std;

int* printDivisors(int n, int &size) {
    int* ans = new int[n];
    size = 0;

    for(int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ans[size++] = i;
            if (n/i !=i) {
            ans[size++] = n/i;
            }
        }
     }

     sort(ans, ans + size);
     return ans;
}


int main() {
    int num;
    cin >> num;
    
    int size;
    int* divisors = printDivisors(num, size);

    for(int i = 0; i < size; i++) {
        cout << divisors[i] << " ";
    }
    cout << endl;
    delete[] divisors;
    
    return 0;
}
