/*
PREFIX SUM

Problem statement
For Array A of size n, the prefix sum of A is another array P of size n+1,
where P[i] represents the sum of the first i elements of A. That is,

P[0] = A[0]
P[1] = A[0] + A[1]
P[2] = A[0] + A[1] + A[2]
...
P[n-1] = A[0] + A[1] + ... + A[n-1]
You will given an array arr of length n along with an output array of the
same length. Your objective is to populate the output array as required, 
without the need to print or return anything.


Constraints:
1<=N<=10000
0<=arr[i]<=10000


------------------------------------------------------------------------
Input 1:
5
1 2 3 4 5
Output 1:
1 3 6 10 15
------------------------------------------------------------------------


------------------------------------------------------------------------
Input 2:
4
4 8 9 11
Output 2:
4 12 21 32
------------------------------------------------------------------------
*/


#include<iostream>
using namespace std;   

void prefixSum(int arr[],int n,int output[]){
    int prefixSum = 0;
    for (int i = 0; i < n; ++i) {
        prefixSum += arr[i];
        output[i] = prefixSum;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int output[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    prefixSum(arr,n,output);
    for(int i = 0;i<n;i++){
        cout<<output[i]<<" ";
    }
}


