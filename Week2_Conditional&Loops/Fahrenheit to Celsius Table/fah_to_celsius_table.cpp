/*
FAHRENHEIT TO CELSIUS TABLE

Problem statement
Given three values - Start Fahrenheit Value (S), End Fahrenheit 
value (E) and Step Size (W), you need to convert all Fahrenheit
values from Start to End at the gap of W, into their corresponding 
Celsius values and print the table.

Hint : Use type casting


Constraints :
0 <= S <= 90
S <= E <=  900
0 <= W <= 80 

  

-------------------------------------------------------------------
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
-------------------------------------------------------------------


  
-------------------------------------------------------------------
Sample Input 2:
20
119
13
Sample Output 2:
20  -6
33  0 
46  7
59  15
72  22
85  29
98  36
111 43
-------------------------------------------------------------------
*/




#include<iostream>
using namespace std;


int main(){

	int startF, endF, stepSize;
	cin>>startF >>endF >>stepSize;
	int C;
	for(int F = startF; F <= endF; F=F+stepSize) {
		C = (5.0/9.0) * (F-32);
		cout<<F <<" " <<C <<endl;
	}
}


