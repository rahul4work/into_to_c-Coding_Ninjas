/*
ARRAY SUM

Problem statement
Given an array of length N, you need to find and print the sum of all 
elements of the array.


Constraints :
1 <= N <= 10^6

Note for C++:
It is advisable to declare an array with a size that can accommodate 
all the elements, considering that N has a maximum value of 10^5.

  

--------------------------------------------------------------------
Sample Input :
3
9 8 9
Sample Output :
26
--------------------------------------------------------------------
*/



#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int arraySum = calculateSum(arr, N);
    cout << arraySum << std::endl;

    return 0;
}
