/*
ALL SUBSTRINGS

Problem statement
For a given input string(str), write a function to print all the possible substrings.

Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas "cdng" is not as the characters 
taken are not contiguous

Constraints:
0 <= N <= 10^3
Where N is the length of the input string.

Time Limit: 1 second



-------------------------------------------------------------------------------------
Sample Input 1:
abc
Sample Output 1:
a 
ab 
abc 
b 
bc 
c 
-------------------------------------------------------------------------------------


-------------------------------------------------------------------------------------
Sample Input 2:
co
Sample Output 2:
c 
co 
o
-------------------------------------------------------------------------------------
*/


#include<iostream>
using namespace std;
#include<string>

int main() {
    string input;
    cin>>input;

    // substr(index, length)
    // cout<<word.substr(0 ,1)

    for(int i=0; i < input.size(); i++) {
        for(int j=i; j < input.size(); j++) {
            int index = i;
            int length = j-i+1;

            cout<<input.substr(index, length) <<endl;

        }
    }
}


