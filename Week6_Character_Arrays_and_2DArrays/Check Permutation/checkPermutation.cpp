/*
CHECK PERMUTATION

Problem statement
For a given two strings, 'str1' and 'str2', check whether they 
are a permutation of each other or not.

Permutations of each other
Two strings are said to be a permutation of each other when 
either of the string's characters can be rearranged so that 
it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

  
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second



--------------------------------------------------------------
Sample Input 1:
abcde
baedc
Sample Output 1:
true
--------------------------------------------------------------


--------------------------------------------------------------
Sample Input 2:
abc
cbd
Sample Output 2:
false
--------------------------------------------------------------
*/


#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {

    int count1[256] = {0};
    int count2[256] = {0};

    int len1 = 0; //for calculating the length of 1st string
    while (input1[len1] != '\0') {
        count1[input1[len1]]++;
        len1++;
    }

    int len2 = 0;  // for calculating the length of 2nd string
    while (input2[len2] != '\0') {
        count2[input2[len2]]++;
        len2++;
    }

    if (len1 != len2) {
        return false;
    }

    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}


