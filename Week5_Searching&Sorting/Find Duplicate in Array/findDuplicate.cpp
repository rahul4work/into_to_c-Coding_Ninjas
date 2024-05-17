/*
FIND DUPLICATE IN ARRAY

Problem statement
You are given an array of integers 'ARR' containing N elements. 
Each integer is in the range [1, N-1], with exactly one element 
repeated in the array.

Your task is to find the duplicate element. The duplicate element
may be repeated more than twice in the error, but there will be 
exactly one element that is repeated in the array.

Note :

All the integers in the array appear only once except for precisely
one integer which appears two or more times.

Constraints :
1 <= T <= 5
1 <= N <= 10^5
1 <= ARR[i] <= N - 1

Time Limit: 1 sec


-------------------------------------------------------------------
Sample Input 1:
1
3
1 1 2
Sample Output 1:
1
-------------------------------------------------------------------


-------------------------------------------------------------------
Sample Input 2:
3
5
1 3 4 2 2
5
3 1 3 4 2
3
1 1 1
Sample Output 2:
2
3
1
-------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int slow = arr[0];
    int fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    fast = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
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
    int ans = findDuplicate(arr, n);
    cout<<ans;
    return 0;
}

