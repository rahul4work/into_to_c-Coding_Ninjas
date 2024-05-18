/*
FIND SQUARE ROOT

Problem statement
You are given a positive integer ‘N’. Your task is to find and return its square root. If
‘N’ is not a perfect square, then return the floor value of sqrt(N).

Example:
Input: ‘N’ = 6

Output: 2

Explanation: The square root of the number 6 lies between 2 and 3, so the floor value is 2.

Constraints:
0 <= N <= 10 ^ 16

Time Limit: 1 sec.


-------------------------------------------------------------------------------------------
Sample Input 1:
6
Sample Output 1:
2
-------------------------------------------------------------------------------------------


-------------------------------------------------------------------------------------------
Sample Input 2:
100
Sample Output 2:
10
-------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <vector>

long long int sqrtN(long long int N) {
    if (N == 0 || N == 1) {
        return N;
    }

    long long int left = 1, right = N, result = 0;

    while (left <= right) {
        long long int mid = left + (right - left) / 2;

        if (mid * mid == N) {
            return mid;
        } else if (mid * mid < N) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    long long int N;
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    std::vector<long long int> resultVector;
    long long int result = sqrtN(N);
    resultVector.push_back(result);

    std::cout << "The floor value of the square root is: " << resultVector[0] << std::endl;

    return 0;
}
