/*
ARRANGE NUMBERS IN THE ARRAY

Problem statement
You have been provided with an empty array (ARR) and its size N. 
The user will only input the value of N, and you don't need to be
concerned about the array itself.

Your objective is to fill the array using integer values from 1 to N 
(inclusive), following the specific order: 1, 3, 5, ..., 6, 4, 2.

Note:
Printing the array is not required. Your task is solely to fill it.

Constraints :
0 <= N <= 10^4

Time Limit: 1sec


---------------------------------------------------------------------
Sample Input 1 :
6
Sample Output 1 :
1 3 5 6 4 2
---------------------------------------------------------------------


---------------------------------------------------------------------
Sample Input 2 :
9
Sample Output 2 :
1 3 5 7 9 8 6 4 2
---------------------------------------------------------------------
*/

  
#include <iostream>
using namespace std;

void arrange(int arr[], int n)
{
    int start=0;
    int end=n-1;
    int value=1;
    while(start<=end) {
        if(value%2==1) {
            arr[start] = value;
            value++;
            start++;
        }

        else {
            arr[end] = value;
            value++;
            end--;
        }
       
    }
}

int main()
{
	
		int n;
		cin >> n;

		int arr[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

}
