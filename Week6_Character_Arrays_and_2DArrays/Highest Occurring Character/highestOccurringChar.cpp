/*
HIGHEST OCCURRING CHARACTER

Problem statement
For a given a string(str), find and return the highest occurring character.

Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the 
highest frequency character, the answer would be 'a'.
If there are two characters in the input string with the same frequency, 
return the character which comes first.

Consider:
Assume all the characters in the given string to be in lowercase always.4

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second


---------------------------------------------------------------------------
Sample Input 1:
abdefgbabfba
Sample Output 1:
b
---------------------------------------------------------------------------


---------------------------------------------------------------------------
Sample Input 2:
xy
Sample Output 2:
x
---------------------------------------------------------------------------
*/


#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {

    int frequency[26] = {0}; 

    for (int i = 0; input[i] != '\0'; i++) {
        frequency[input[i] - 'a']++;
    }

    char highChar = 'a'; 
    int highFrequency = frequency[0];

    for (int i = 1; i < 26; i++) {
        if (frequency[i] > highFrequency) {
            highChar = 'a' + i;
            highFrequency = frequency[i];
        }
    }

    return highChar;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}

