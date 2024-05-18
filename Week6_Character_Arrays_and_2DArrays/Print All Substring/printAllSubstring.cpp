/*
PRINT ALL SUBSTRING

Problem statement
For a given input string(str), write a function to print all the possible substrings.

Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters 
taken are not contiguous

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second


------------------------------------------------------------------------------------
Sample Input 1:
abc
Sample Output 1:
a 
ab 
abc 
b 
bc 
c 
------------------------------------------------------------------------------------


------------------------------------------------------------------------------------
Sample Input 2:
co
Sample Output 2:
c 
co 
o
------------------------------------------------------------------------------------
*/


#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {
    int length = 0;
    while (input[length] != '\0') {
        length++;
    }

    for (int start = 0; start < length; start++) {
        for (int end = start; end < length; end++) {
            for (int i = start; i <= end; i++) {
                cout << input[i];
            }
            cout << endl;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}

