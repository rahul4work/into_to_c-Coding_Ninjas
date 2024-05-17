/*
FIND INVERSION USING SELECTION SORT

Problem statement
You have a list of numbers that are not in order. You want to find the sum of the 
differences between the indices of pairs of numbers that are in the wrong order.
A pair of numbers is considered to be in the wrong order if the smaller number
comes after the larger number in the list.

Example:
Input: ‘N’ = 5 
‘A’ = [3, 2, 11, 5, 1]

Output: 6

Constraints :
1 <= N <= 10^4
1 <= nums[i] <= 10^9
  
Time Limit: 1 sec


-----------------------------------------------------------------------------------------
Sample Input 1:
5
3 2 11 5 1
Sample Output 1:
6
Explanation
When we apply selection sort, first swap will happen between array[0] to array[4], 
inversion will be (index of arrar[4]-index of array[0]) = 4-0=4 and the array after 
this will be [1, 2, 11, 5, 3], still the array is not sorted. So we will apply selection 
sort again, the swap will now take place between array[2] and array[4], inversion will be
4+(index of arrar[4]-index of array[2])=4+(4-2)=4+2=6.So the final sorted array now will
be [1,2,3,5,11]
-----------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------
Sample Input 2:
7
17 5 14 16 11 18 10
Sample Output 2:
10
-----------------------------------------------------------------------------------------
*/



#include<iostream>
using namespace std;

int getInversion(int arr[], int n) {
    int ans = 0;
    for(int i = 0; i<n-1; i++){
        int minIdx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        ans = ans + (minIdx-i);
        swap(arr[i], arr[minIdx]);
    }
    return ans;


int main() {
    int n;
    cin>>n;
    
    int arr[10000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int result = getInversion(arr, n);
    cout<<result <<endl;
}
