/*
CHECK PALINDROME

Problem statement
Given a string, determine if it is a palindrome, considering only
alphanumeric characters.

Palindrome
A palindrome is a word, number, phrase, or other sequences of 
characters which read the same backwards and forwards.
  
Example:
If the input string happens to be, "malayalam" then as we see 
that this word can be read the same as forward and backwards, 
it is said to be a valid palindrome.

The expected output for this example will print, 'true'.
From that being said, you are required to return a boolean value 
from the function that has been asked to implement.


Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second



----------------------------------------------------------------
Sample Input 1 :
abcdcba
Sample Output 1 :
true 
----------------------------------------------------------------



----------------------------------------------------------------
Sample Input 2:
coding
Sample Output 2:
false
----------------------------------------------------------------
*/


#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int left = 0, right = length - 1;

    while (left < right) {
        while (left < right && !((str[left] >= 'a' && str[left] <= 'z') || (str[left] >= 'A' && str[left] <= 'Z') || (str[left] >= '0' && str[left] <= '9'))) {
            left++;
        }

        while (left < right && !((str[right] >= 'a' && str[right] <= 'z') || (str[right] >= 'A' && str[right] <= 'Z') || (str[right] >= '0' && str[right] <= '9'))) {
            right--;
        }

        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}

