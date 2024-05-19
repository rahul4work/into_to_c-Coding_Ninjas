/*
REMOVE CHARACTER

Problem statement
Given a string and a character X, write a function to remove 
all occurrences of the character X from the string.


Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second


--------------------------------------------------------------
Sample Input 1:
aabccbaa
a
Sample Output 1:
bccb
--------------------------------------------------------------


--------------------------------------------------------------
Sample Input 2:
xxyyzxx
y
Sample Output 2:
xxzxx
--------------------------------------------------------------
*/



#include<iostream>
using namespace std;

void removeAllOccurrencesOfChar(string input, char c) {
    string result;
    /*
    for(int i=0; i<input.size(); i++){
        char ch = input[i];
        if(ch != c){
            result = result + ch;
        }
    }*/

    //enhanced for loop
    for(char ch: input) {
        if(ch != c) {
            result += ch;
        }
    }
    cout<<result <<endl;
}

int main() {
    string arr;
    char ch;

    getline(cin, arr);
    cin>> ch;

    removeAllOccurrencesOfChar(arr, ch);
}


