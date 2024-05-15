/*
COMPOSITE

Problem statement
Your task is to write a function named print_composite that prints if there 
are any composite numbers up to a given number, n.


Composite numbers are positive integers greater than 1 that have more than 
two positive divisors. In other words, a composite number has factors other 
than 1 and itself.


--------------------------------------------------------------------------
Sample Input 1:
10
Sample Output 1:
4
6
8
9
10
--------------------------------------------------------------------------
*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool print_composite(int n)
{
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return true; 
        }
    }

    return false;
}

int main()
{
    
    int n;
    cin>>n;
    
    for(int i=2; i <= n; i++){
        if(print_composite(i))
            cout<<i<<endl;
    }
 
    return 0;
}

