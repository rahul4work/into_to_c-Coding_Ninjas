/*
SUM OR PRODUCT

Problem statement
Write a program that asks the user for a number N and a choice C. And then give 
them the possibility to choose between computing the sum and computing the product 
of all integers in the range 1 to N (both inclusive).


If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)

  
Constraints :
1 <= N <= 12


------------------------------------------------------------------------------------
Sample Input 1 :
10
1
Sample Output 1 :
55
------------------------------------------------------------------------------------


------------------------------------------------------------------------------------
Sample Input 2 :
10
2
Sample Output 2 :
3628800
------------------------------------------------------------------------------------


------------------------------------------------------------------------------------
Sample Input 3 :
10
4
Sample Output 3 :
-1
------------------------------------------------------------------------------------
*/



#include<iostream>
using namespace std;

int main() {

	int N, C;
    cin >> N;
    cin >> C;

    if (C == 1) {
        int result = 0;
        for (int i = 1; i <= N; i++) {
          result = result + i;
        }
        cout << result << endl;
    }
	
	else if (C == 2) {
        long long result = 1;
        for (int i = 1; i <= N; i++) {
            result = result * i;
    	}
        cout << result << endl;
    } 
	else {
        cout << -1 << endl;
    }
}

