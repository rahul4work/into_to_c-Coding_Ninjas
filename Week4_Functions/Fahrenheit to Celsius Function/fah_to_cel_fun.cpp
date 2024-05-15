/*
FAHRENHEIT TO CELSIUS FUNCTION

Problem statement
Given three values - Start Fahrenheit Value (S), End Fahrenheit value 
(E) and Step Size (W), you need to convert all Fahrenheit values from 
Start to End at the gap of W, into their corresponding Celsius values 
and print the table.



Note:
You don't have to write the main function or take input. It has already 
been taken care of and you need to just print the integer value . Just 
write the code that prints Fahrenheit to Celsius table in the function 
itself.
Formula is C = (F - 32) * 5/9


Constraints :
0 <= S <= 1000
0 <= E <= 1000
0 <= W <= 1000


----------------------------------------------------------------------
Sample Input 1:
0 
100 
20
Sample Output 1:
0   -17
20  -6
40  4
60  15
80  26
100 37
----------------------------------------------------------------------


----------------------------------------------------------------------
Sample Input 2:
120 
200 
40
Sample Output 2:
120 48
160 71
200 93
----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

void printTable(int start, int end, int step) {

    for(int F = start; F<=end; F=F+step) {
        int C = ( (5 * (F-32)) / 9 );
        cout<<F <<" " <<C <<endl;

    }
}


int main() {
    int start, end, step;
    cin >>start >>end >>step;
  
    printTable(start, end, step);
    
    return 0;
}


