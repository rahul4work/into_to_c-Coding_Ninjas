/*
REMOVE CONSECUTIVE DUPLICATES FROM STRING

Problem statement
You are given a string 'STR' consisting of lower and upper case characters. 
You need to remove the consecutive duplicates characters, and return the new string.



Note :
You don't have to print anything, it has already been taken care of. Just implement
the given function.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= |S| <= 10^5

Where |S| represents the length of the string.

Time limit: 1 sec



------------------------------------------------------------------------------------
Sample Input 1 :
aabccba
Sample Output 1 :
abcba
Explanation of Sample Output 1 :
The string basically is a concatenation of [aa][b][cc][b][a] without considering the 
brackets. From each segment we need to choose only 1 character as all the characters 
are duplicates, therefore the final answer is [a][b][c][b][a] = abcba
------------------------------------------------------------------------------------


------------------------------------------------------------------------------------
Sample Input 2 :
xxxyyyzwwzzz
Sample Output 2 :
xyzwz
Explanation of Sample Output 2 :
The string basically is a concatenation of [xxx][yyy][z][ww][zzz]. After choosing 1 
character from each segment our final answer is [x][y][z][w][z] = xyzwz
------------------------------------------------------------------------------------
*/


#include<iostream>

using namespace std;

string removeConsecutiveDuplicate(string str) {
    string result;
    for(int i=0; i<str.length(); i++) {
        if(i==0 | str[i] != str[i-1]){
            result = result + str[i];
        }
    }

    return result;
}


int main() {
    string input;
    getline(cin, input);

    string result = removeConsecutiveDuplicate(input);

    cout<<result;
    
} 


