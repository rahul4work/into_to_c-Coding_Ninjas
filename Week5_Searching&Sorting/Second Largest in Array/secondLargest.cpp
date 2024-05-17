/*
SECOND LARGEST IN ARRAY

Problem statement
You have been given a random integer array/list(ARR) of size N.
You are required to find and return the second largest element 
present in the array/list.


Constraints :
0 <= N <= 10^2
1<=arr[i]<=10^3

Time Limit: 1 sec


----------------------------------------------------------------
Sample Input 1:
5
4 3 10 9 2
Sample Output 1:
9
----------------------------------------------------------------


----------------------------------------------------------------
Sample Input 2:
7
13 6 31 14 29 44 3
Sample Output 2:
31
----------------------------------------------------------------
*/



#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n)
{
    int firstLargest = -1, secondLargest = -1;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = findSecondLargest(arr, n);
    cout<<ans;
    return 0;
}
