/*
REVERSE EACH WORD

Problem statement
Aadil has been provided with a sentence in the form of a string as a 
function parameter. The task is to implement a function so as to return 
the sentence such that each word in the sentence is reversed.

Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".
Detailed explanation ( Input/output format, Notes, Images )
  
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second



-------------------------------------------------------------------------
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
emocleW ot gnidoC sajniN
-------------------------------------------------------------------------


-------------------------------------------------------------------------
Sample Input 2:
Always indent your code
Sample Output 2:
syawlA tnedni ruoy edoc
-------------------------------------------------------------------------
*/


#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    string word;
    
    while(cin>> word) {
        reverse(word.begin() , word.end());
        cout<<word <<' ';
    }

    return 0;
}

