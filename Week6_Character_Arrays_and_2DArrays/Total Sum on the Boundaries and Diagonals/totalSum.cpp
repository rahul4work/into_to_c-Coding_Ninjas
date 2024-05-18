/*
TOTAL SUM ON THE BOUNDARIES AND DIAGONALS

Problem statement
For a given two-dimensional square matrix of size (N x N). Find the
total sum of elements on both the diagonals and at all the four boundaries.


Constraints:
0 <= N <= 10^3
  
Time Limit: 1sec


----------------------------------------------------------------------------
Sample input 1:
3
1 2 3
4 5 6
7 8 9
Sample Output 1:
45
----------------------------------------------------------------------------


----------------------------------------------------------------------------
Sample input 2:
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
Sample Output 2:
273
----------------------------------------------------------------------------
*/



#include <iostream>
using namespace std;

int totalSum(int input[][501], int n)
{
   if (n == 0) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == j || j == n - 1 - i) {
                sum += input[i][j];
            }
        }
    }
    return sum;
}

int main()
{
	
		int n;
		cin >> n;
		int arr[501][501];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
        
        cout << totalSum(arr, n) << endl; 
	
}


