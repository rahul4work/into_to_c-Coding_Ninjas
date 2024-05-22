/*
COMPRESS THE STRING

Problem statement
Write a program to do basic string compression. For a character which is consecutively
repeated more than once, replace consecutive duplicate occurrences with the count of 
repetitions.

Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".
The string is compressed only when the repeated character count is more than 1.
Note:
Consecutive count of every character in the input string is less than or equal to 9. 
You are not required to print anything. It has already been taken care of. Just implement 
the given function and return the compressed string.


Constraints:
0 <= N <= 10^6

Where 'N' is the length of the input string.

Time Limit: 1 sec


-----------------------------------------------------------------------------------------
Sample Input 1:
aaabbccdsa
Sample Output 1:
a3b2c2dsa
-----------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------
Sample Input 2:
aaabbcddeeeee
Sample Output 2:
a3b2cd2e5
-----------------------------------------------------------------------------------------
*/


#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {

    int n = input.size();
    if (n <= 1) {
        return input;
    }

    string compressed;
    int count = 1;

    for (int i = 1; i <= n; ++i) {
        if (i < n && input[i] == input[i - 1]) {
            count++;
        } else {
            compressed += input[i - 1];
            if (count > 1) {
                compressed += to_string(count);
            }
            count = 1;
        }
    }

    return compressed;
}

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}



