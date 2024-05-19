/*
COUNT WORDS

Problem statement
For a given input string(str), find and return the total number of 
words present in it.

It is assumed that two words will have only a single space in between. 
Also, there wouldn't be any leading and trailing spaces in the given 
input string.


Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 sec



---------------------------------------------------------------------
Sample Input 1:
Coding Ninjas!
Sample Output 1:
2
---------------------------------------------------------------------


---------------------------------------------------------------------
Sample Input 2:
this is a sample string
Sample Output 2:
5
---------------------------------------------------------------------
*/


#include<iostream>
using namespace std;

int countWords(string str){
    
    bool flag = false;
    int count = 0;
    string word;

    int N = str.length();
    for(int i =0; i<N; i++) {
        char ch = str[i];
        if(ch == ' '){
            if(flag) {
                count++;
                flag = false;
            }
        }
        else {
            flag = true;
        }
    }

    if(flag) {
        count++;
    }

    return count;
}

int main() {
    string input;
    getline(cin, input);

    cout<<countWords(input) <<endl;
}



