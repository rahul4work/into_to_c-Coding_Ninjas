/*
PALINDROEM NUMBER

Problem statement
Check whether a given number ’n’ is a palindrome number.

Note :
Palindrome numbers are the numbers that don't change when reversed.
You don’t need to print anything. Just implement the given function.
Example:
Input: 'n' = 51415
Output: true
Explanation: On reversing, 51415 gives 51415.


------------------------------------------------------------------------
Sample Input 1 :
1032
Sample Output 1 :
false
------------------------------------------------------------------------


------------------------------------------------------------------------
Sample Input 2 :
121
Sample Output 2 :
true
------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

bool palindrome(int n)
{
    int orgNum = n;
    int revNum = 0;

    while (n > 0) {
        int digit = n % 10;
        revNum = revNum * 10 + digit;
        n /= 10;
    }
    return orgNum == revNum;   
}

int main() {
	int n;
	cin >> n;
    bool pal = palindrome(n);
    if(pal == true)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
