/*
SMALLEST ELEMENT

Problem statement
Write a program that returns minimum element in an array.

Hint : the Math.min method is used to find the minimum of two numbers .


Constraints:
1<=N<=10^5
  
Note for C++:
It is advisable to declare an array with a size that can accommodate all 
the elements, considering that N has a maximum value of 10^5.


  
------------------------------------------------------------------------
Input 1:
5 
6 4 3 8 9
Output 1:
3
------------------------------------------------------------------------


------------------------------------------------------------------------
Input 2:
4
8 8 8 8
Output 2:
8
------------------------------------------------------------------------
*/


#include<iostream>
#include <climits>
using namespace std;

int findMin(int arr[], int size) {
    int minEle = INT_MAX;

    for (int i = 0; i < size; ++i) {
        minEle = min(minEle, arr[i]);
    }

    return minEle;
}

int main() {
	int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int minEle = findMin(arr, N);
    cout<< minEle << endl;

    return 0;
}
