/*
REVERSE STRING WORD WISE

Problem statement
Reverse the given string word-wise. The last word in the given string
should come at 1st place, the last-second word at 2nd place, and so on.
Individual words should remain as it is.


Constraints :
0 <= |S| <= 10^5
where |S| represents the length of string, S.


----------------------------------------------------------------------
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
----------------------------------------------------------------------


----------------------------------------------------------------------
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
----------------------------------------------------------------------
*/



#include<iostream>
using namespace std;

int length(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverseStr(char input[]) {
    int len = length(input);
    int i = 0, j = len-1;
    while(i <= j) {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char arr[10000];
    cin.getline(arr, 100);
    reverseStr(arr);
    cout<<arr <<endl;
}




