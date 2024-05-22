/*
CHECK PERMUTATION

Problem statement
You have been given two strings 'STR1' and 'STR2'. You have to 
check whether the two strings are anagram to each other or not.

Note:
Two strings are said to be anagram if they contain the same characters, 
irrespective of the order of the characters.
Example :
If 'STR1' = “listen” and 'STR2' = “silent” then the output will be 1.

Both the strings contain the same set of characters.
Detailed explanation ( Input/output format, Notes, Images )

Constraints:
1 <= T <= 100
1 <= |STR1|, |STR2| <= 10^3

Where |STR1| and |STR2| are the lengths of the string 'STR1' and 'STR2'
respectively.

Time limit: 1 sec


------------------------------------------------------------------------
Sample Input 1:
2
listen silent
east eats
Sample Output 1:
1
1
------------------------------------------------------------------------



------------------------------------------------------------------------
Sample Input 2:
2
triangle integral
hearts earth
Sample Output 2:
1
0
------------------------------------------------------------------------
*/


#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    int n1 = str1.length();
    int n2 = str2.length();

    if (n1 != n2) {
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < n1; i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }

    return true;
}


