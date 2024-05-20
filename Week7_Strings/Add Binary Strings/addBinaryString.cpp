/*
ADD BINARY STRING

Problem statement
You have been given two binary strings ‘A’ and ‘B’. Your task is to
find the sum of both strings in the form of a binary string.

Binary strings are the representation of integers in the binary form.
For example, the binary strings of 9 and 16 are “1001” and “10000” respectively.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 5
1 <= N, M <= 5000

‘A’ and ‘B’ consist only of '0' or '1' characters.

Each string does not contain leading zeros except for the zero itself.

Time limit: 1 sec
Sample Input 1:
2
2 2
10 01
3 2
111 10
Sample Output 1:
11
1001
Explanation of sample input 1:
In the first test case, the first string is “10” which is 2 in the decimal format, 
  and the second string is “01” which is 1 in the decimal format. So, 2 + 1 = 3, which 
  is represented as “11” in binary form.

In the first test case, the first string is “111” which is 7 in the decimal format,
and the second string is “10” which is 2 in the decimal format. So, 7 + 2 = 9, which
is represented as “1001” in binary form.
Sample Input 2:
2
3 1
111 0
1 1
1 1
Sample Output 2:
111
10


*/


#include<iostream>
using namespace std;

int last(string a) {
    if(a.size() == 0) return 0;

    if(a.back() == '0') return 0;
    else return 1;
}

void remove(string &a) {
    if(a.size() > 0) a.pop_back();
}

string addBinaryString(string &a, string &b, int n, int m) {
    int c = 0;
    string res = "";

    while(n > 0 || m > 0) {
        int sum = last(a) + last(b) + c;
        int d = sum % 2;
        c = sum / 2;

        if(d == 0) res.push_back('0');
        else res.push_back('1');
        
        remove(a), remove(b);
        n-- , m-- ;
    }

    if(c > 0) {
        if(c == 0) res.push_back('0');
        else res.push_back('1');
    }

    string final_result = "";
    while(res.size() > 0) {
        final_result.push_back(res.back());
        res.pop_back();
    }

    return final_result;
}

int main() {
    string a, b;
    cout<<"Enter the 1st digit: ";
    cin>>a;
    cout<<"Enter the 2nd digit: ";
    cin>>b;

    int n = a.size(), m = b.size();
    string result = addBinaryString(a, b, n, m);

    cout<<"The final result is: "<<result;

    return 0;        

}
