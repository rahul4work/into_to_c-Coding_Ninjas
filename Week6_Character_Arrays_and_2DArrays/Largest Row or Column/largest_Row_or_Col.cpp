/*
LARGEST ROW OR COLUMN

Problem statement
For a given two-dimensional integer array of size (N x M), you need to 
find out which row or column has the largest sum(sum of all the elements 
in a row/column) amongst all the rows and columns. Return the maximum sum.

  
Constraints :
0 <= N <= 10^3
0 <= M <= 10^3
Elements in array range from 1 to 1000
  
Time Limit: 1sec


-------------------------------------------------------------------------
Sample Input 1:
6 4
28 26 24 22
21 23 25 27
20 18 16 14
13 15 17 19
12 10 8  6
5  7  11 13  
Sample Output 2:
101
-------------------------------------------------------------------------
*/


#include<iostream>
#include<climits>
using namespace std;

int largestRowCol(int mat[][100], int n, int m) {
    int max = INT_MIN;
    bool isRow = true;
    int index = -1;

    // for rowWise Traversal
    for(int i =0; i<n; i++) {
        int sum = 0;
        for(int j=0; j<m; j++) {
            sum += mat[i][j];
        }
        if (sum > max) {
            max = sum;
            index = i;
        }
    }

    // for colWise Traversal
    for(int i =0; i<m; i++) {
        int sum = 0;
        for(int j=0; j<n; j++) {
            sum += mat[j][i];
        }
        if (sum > max) {
            max = sum;
            isRow = false;
            index = i;
        }
    }
    return max;

}

int main() {
    int mat[100][100];
    int row,col;
    cin>>row>>col;

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin>>mat[i][j];
        }
    }

    int ans = largestRowCol(mat, row, col);
    cout<<ans;

}
