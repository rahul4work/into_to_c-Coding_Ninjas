/*
FIND ALL THE OCCURRENCES OF THE PATTERN

Problem statement
Given a string ‘str’ and a pattern ‘pat’, you have to find all 
occurrences of the pattern in the string. You have to print the
starting positions of all occurrences of the pattern in the string.


Constraints:
1<str.size()<500
1<=pat.size()<=str.size


----------------------------------------------------------------------------------------
Sample Input 1:
‘str’ = “heyhihey”
‘pat’ = “hey”
Sample Output 1:
0 5
----------------------------------------------------------------------------------------

  
----------------------------------------------------------------------------------------
Explanation:
The pattern has a length of 3. We check each substring of the original string, starting 
from index 'i', to see if the first three characters match the pattern. If they do, 'i' 
is considered a valid index.

In the string "heyhihey":

At index 0, the substring "hey" matches the pattern, so 0 is a valid index.

At index 1, the substring "eyh" does not match the pattern, so 1 is not a valid index.

At index 2, the substring "yhi" does not match the pattern, so 2 is not a valid index.

At index 5, the substring "hey" matches the pattern, so 5 is a valid index.

Thus, the valid indices are 0 and 5.
----------------------------------------------------------------------------------------
*/



#include<iostream>
using namespace std;

int main() {

    string str, pat;
    getline(cin, str);
    cin>>pat;

    int n = str.size();
    int m = pat.size();

    for(int i = 0; i <= n-m; i++) {
        bool flag = true;
        for(int j = 0; j<m; j++) {
            if(str[i+j] != pat[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout<<i <<" ";
        }
    }
    return 0;
}




