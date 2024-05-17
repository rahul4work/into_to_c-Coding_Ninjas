/*
INSERTION SORT

Problem statement
You are given an integer array 'arr' of size 'N'.

You must sort this array using 'Insertion Sort' recursively.

Note:
Change in the input array itself. You don't need to return 
or print the elements.

Constraints :
0 <= N <= 10^3
0 <= arr[i] <= 10^5
  
Time Limit: 1 sec
  
Example:
  
Input: ‘N’ = 7
'arr' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]

Explanation: After applying insertion sort on the input array,
the output is [1 2 3 4 6 13 28].


-------------------------------------------------------------
Sample Input 1:
5
9 3 6 2 0
Sample Output 1:
0 2 3 6 9
-------------------------------------------------------------


-------------------------------------------------------------
Sample Input 2:
4
4 3 2 1
Sample Output 2:
1 2 3 4 
-------------------------------------------------------------
*/


#include<iostream>
using namespace std;

void insertionSort(int arr[], int N) {
    for(int i=0; i<N; i++) {
        int current = arr[i];
        int j;
        for(j=i-1; j>=0; j--) {
            if(current < arr[j]){
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = current;
    }
}

int main() {
    int size;
    cin>>size;
    int ARR[10000];
    for(int i=0; i<size; i++){
        cin>>ARR[i];
    }

    insertionSort(ARR, size);

    for(int i=0; i<size; i++){
        cout<<ARR[i] <<" ";
    }

}


