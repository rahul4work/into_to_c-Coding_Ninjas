/*
SORT 0 1 2

Problem statement
You are given an integer array/list(ARR) of size N. It contains only 0s,
1s and 2s. Write a solution to sort this array/list in a 'single scan'.

'Single Scan' refers to iterating over the array/list just once or to put 
it in other words, you will be visiting each element in the array/list just
once.

Note:
You need to change in the given array/list itself. Hence, no need to return
or print anything. 

Constraints :
1 <= t <= 10^2
0 <= N <= 10^1

Time Limit: 1 sec


---------------------------------------------------------------------------
Sample Input 1:
1
7
0 1 2 0 2 0 1
Sample Output 1:
0 0 0 1 1 2 2 
---------------------------------------------------------------------------


---------------------------------------------------------------------------
Sample Input 2:
2
5
2 2 0 1 1
7
0 1 2 0 1 2 0
Sample Output 2:
0 1 1 2 2 
0 0 0 1 1 2 2
---------------------------------------------------------------------------
*/


#include<iostream>
using namespace std;

void sort012(int arr[], int n)
{

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                std::swap(arr[low], arr[mid]);
                ++low;
                ++mid;
                break;
            case 1:
                ++mid;
                break;
            case 2:
                std::swap(arr[mid], arr[high]);
                --high;
                break;
        }
    }
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int arr[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		cout << endl;
	}

	return 0;
}

