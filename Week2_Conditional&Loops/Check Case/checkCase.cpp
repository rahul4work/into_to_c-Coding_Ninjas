/*
CHECK CASE

Problem statement
Write a program that takes a character as input and prints 1, 0, 
or -1 according to the following rules.



1, if the character is an uppercase alphabet (A - Z).
0, if the character is a lowercase alphabet (a - z).
-1, if the character is not an alphabet.


Example:
Input: The character is 'a'.

Output: 0

Explanation: The input character is lowercase, so our answer is 0.
Detailed explanation ( Input/output format, Notes, Images )


------------------------------------------------------------------
Sample Input 1 :
v
Sample Output 1 :
0
------------------------------------------------------------------


------------------------------------------------------------------
Sample Input 2 :
V
Sample Output 2 :
1
------------------------------------------------------------------
*/
	

	

#include<iostream>
using namespace std;

int main() {
	
    char char1;

    cin>> char1;
    if(char1>='A' && char1<='Z') {
        cout<< "1" <<endl;
    }

    else if (char1>='a' && char1<='z') {
        cout<< "0" <<endl;
    }

    else {
        cout<< "-1";
    }
}


