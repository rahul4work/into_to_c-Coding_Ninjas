/*
SECOND LARGEST

level:easy


Problem statement
Take input a stream of n integer elements, find the second largest element present.

The given elements can contain duplicate elements as well. If only 0 or 1 element 
is given, the second largest should be INT_MIN ( - 2^31 ).

Input format :

Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)


---------------------------------------------------------------------------------
Sample Input 1:
 4
 3 9 0 9
Sample Output 1:
 3
---------------------------------------------------------------------------------


---------------------------------------------------------------------------------
Sample Input 2 :
 2
 4 4
Sample Output 2:
 -2147483648
---------------------------------------------------------------------------------
*/


#include<iostream>
using namespace std;
#include <climits>

int main(){

    int n;
    cin >> n;

    if (n == 0) {
        cout << INT_MIN << endl;
        return 0;
    }

    int firstLargest = INT_MIN, secondLargest = INT_MIN;
    int num;

    for (int i = 0; i < n; ++i) {
        cin >> num;

        if (num > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = num;
        } else if (num > secondLargest && num != firstLargest) {
            secondLargest = num;
        }
    }

    if (secondLargest == INT_MIN) {
        cout << INT_MIN << endl;
    } else {
        cout << secondLargest << endl;
    }

    return 0;

}

