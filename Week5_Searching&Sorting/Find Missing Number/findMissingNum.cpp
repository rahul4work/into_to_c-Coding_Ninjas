/*
FIND MISSING NUMBER

Problem statement
You have been given an array/list. Your task in to return the missing number. 
Array contains the distinct element form (0,N), both are inclusive. Missing 
number is the number that is not present in the array.

Input: ‘N’ = 4 
‘A’ = [3, 1, 0, 4]

Output: 2

Constraints :
1 <= N <= 10^4
0 <= nums[i] <=10^9-1
  
Time Limit: 1 sec


----------------------------------------------------------------------------
Sample Input 1:
4
3 1 0 4
Sample Output 1:
2
----------------------------------------------------------------------------


----------------------------------------------------------------------------
Sample Input 2:
6
3 2 5 4 0 1
Sample Output 2:
6
----------------------------------------------------------------------------
*/



#include<iostream>
using namespace std;

int missingNumber(int arr[], int n)
{
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; ++i) {
        actualSum += arr[i];
    }
    
    return expectedSum - actualSum;
    
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
    int ans = missingNumber(arr, n);
    cout<<ans;
    return 0;
}


