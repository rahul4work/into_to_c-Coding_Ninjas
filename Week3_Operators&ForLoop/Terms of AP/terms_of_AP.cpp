/*
TERMS OF AP

Problem statement
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.


Constraints :
1 <= x <= 1,000


-----------------------------------------------------------------------------------------
Sample Input 1 :
10
Sample Output 1 :
5 11 14 17 23 26 29 35 38 41
-----------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------
Sample Input 2 :
4
Sample Output 2 :
5 11 14 17
-----------------------------------------------------------------------------------------
Explanation :
Input is 4 and print the first 4 numbers that are not divisible by 4 and are of the form 
3N + 2, where k is a non-negative integer.   
-----------------------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

int main() {

	int input;
    cin >> input;

    if (input < 1 || input > 1000) {
        cout<<endl;
        return 1;
    }

    int count = 0;
    int num = 1;

    while (count < input) {
        int term = 3 * num + 2;

        if (term % 4 != 0) {
            cout << term << " ";
            count++;
        }

        num++;
    }

    cout <<endl;
	
}
