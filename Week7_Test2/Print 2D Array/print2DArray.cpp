/*
PRINT 2D ARRAY

Problem statement
Given a 2D integer array with n rows and m columns. Print the 0th row from
input n times, 1st row n-1 times…..(n-1)th row will be printed 1 time.



-------------------------------------------------------------------------
Sample Input 1:
3 3
1 2 3
4 5 6
7 8 9
Sample Output 1 :
1 2 3
1 2 3
1 2 3
4 5 6
4 5 6
7 8 9
-------------------------------------------------------------------------
*/



#include <iostream>
using namespace std;

void print2DArray(int input[][1000], int row, int col) {
  
	for (int i = 0; i < row; i++) {
        for (int j = 0; j < row - i; j++) {
            for (int k = 0; k < col; k++) {
                cout << input[i][k] << " ";
            }
            cout << std::endl;
        }
    }

}

int main() {
    int row, col;
    cin >> row >> col;

    int input[row][1000];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>input[i][j];
        }
    }
    print2DArray(input, row, col);
}


