/*
BEAUTIFUL STRING

Problem statement
Ninja has been given a binary string ‘STR’ containing either ‘0’ or ‘1’. 
A binary string is called beautiful if it contains alternating 0s and 1s.

For Example:‘0101’, ‘1010’, ‘101’, ‘010’ are beautiful strings.

He wants to make ‘STR’ beautiful by performing some operations on it. 
In one operation, Ninja can convert ‘0’ into ‘1’ or vice versa.

Your task is to determine the minimum number of operations Ninja should 
perform to make ‘STR’ beautiful.

For Example :
Minimum operations to make ‘STR’ ‘0010’ beautiful is ‘1’. In one operation, 
we can convert ‘0’ at index ‘0’ (0-based indexing) to ‘1’. The ‘STR’ now
becomes ‘1010’ which is a beautiful string. 

Constraints :
1 <= T <= 100
2 <= |STR| <= 10^5
STR[i] = ‘1’ or ‘0’

Where '|STR|' denotes the length of ‘STR’.

Time Limit: 1 sec 


---------------------------------------------------------------------------
Sample Input 1 :
2
0000
1010
Sample Output 1 :
2
0
---------------------------------------------------------------------------


---------------------------------------------------------------------------
Sample Input 2 :
2
01011
1001
Sample Output 2 :
1
2
---------------------------------------------------------------------------
*/



int makeBeautiful(string str) {

    int n = str. length();
    int t1 = 0, t2 = 0;
    char s1 = '0', s2 = '1';
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') {
            if (s1 == '0') {
                t1++;
            } 
            else {
                t2++;
            }
        }
        else {
            if (s1 == '1') {
                t1++;
            } 
            else {
                t2++;
            }
        }
        if (s1 == '1') {
            s1 = '0';
            s2 = '1';
        } else {
            s1 = '1';
            s2 = 'o';
        }
    }
    return min(t1, t2);
}



