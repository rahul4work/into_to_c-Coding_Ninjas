/*
FIND KTH SMALLEST

Problem statement
You have been given an array/list and a number k. You have to find the kth smallest number.

Example:
Input: ‘N’ = 5 , 'k' = 2
‘A’ = [3, 2, 11, 5, 1]

Output: 2

Explanation: For nums = [3, 2, 11, 5, 1],
In the given array, smallest element is 1 and 2nd smallest element is 2 and the value of k is
2. So, our output will be 2.


Constraints :
1 <= N <= 10^4
1 <= nums[i] <= 10^9
  
Time Limit: 1 sec

  
--------------------------------------------------------------------------------------------
Sample Input 1:
5
3 2 5 11 1
2
Sample Output 1:
2
--------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------
Sample Input 2:
7
17 5 14 16 11 18 10
5
Sample Output 2:
16
--------------------------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }

    return arr[k - 1];
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int kth_smallest = kthSmallest(arr, n, k);
    cout << kth_smallest << endl;
    return 0;
}
