/*
SQUARE ROOT (INTEGRAL)

Problem statement
Given a number N, find its square root. You need to find and print only the integral part of square root of N.

For eg. if number given is 18, answer is 4.


Constraints :
0 <= N <= 10^8


--------------------------------------------------------------------------------------------------------------
Sample Input 1 :
10
Sample Output 1 :
3
--------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------
Sample Input 2 :
4
Sample Output 2 :
2
--------------------------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::cout << static_cast<int>(sqrt(n)) << std::endl;

    return 0;
}
