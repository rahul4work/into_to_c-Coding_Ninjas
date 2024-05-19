/*
CHECK PALINDROME

Problem statement
Write a function that takes a string as input and determines if it is a 
palindrome or not, considering only alphanumeric characters.

Note:
You are not required to print anything. It has already been taken care of. 
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second



-------------------------------------------------------------------------
Sample Input 1 :
abcdcba
Sample Output 1 :
Palindrome 
-------------------------------------------------------------------------


-------------------------------------------------------------------------
Sample Input 2:
coding
Sample Output 2:
Not a Palindrome
-------------------------------------------------------------------------
*/



#include<bits/stdc++.h>
using namespace std;


bool checkPalindrome(string str) {
    bool flag = true;

    int N = str.size();
    for(int i=0; i<N/2; i++) {
        if(str[i] != str[N-i-1]) {
            flag = false;
        }
    }
    return flag;
    
}

int main(){
    string a;
    cin>>a;
    cout << (checkPalindrome(a) ? "Palindrome" : "Not a Palindrome");
}



