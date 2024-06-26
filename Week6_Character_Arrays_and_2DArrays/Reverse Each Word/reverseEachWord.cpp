/*
REVERSE EACH WORD

level:moderate

Problem statement
Aadil has been provided with a sentence in the form of a string as a 
function parameter. The task is to implement a function so as to change 
the sentence such that each word in the sentence is reversed. A word 
is a combination of characters without any spaces.

Example:
Input Sentence: "Hello I am Aadil"
The expected output will look, "olleH I ma lidaA".

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

All the words in string are separated by a single space.

String does not contain any leading or trailing spaces.

Time Limit: 1 second



---------------------------------------------------------------------------
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
emocleW ot gnidoC sajniN
---------------------------------------------------------------------------


---------------------------------------------------------------------------
Sample Input 2:
Always indent your code
Sample Output 2:
syawlA tnedni ruoy edoc
---------------------------------------------------------------------------
*/


#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char input[]) {
  
    int start = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ') {
            int end = i - 1;
            while (start < end) {
                swap(input[start], input[end]);
                start++;
                end--;
            }
            start = i + 1; 
        }
    }

    int end = strlen(input) - 1;
    while (start < end) {
        swap(input[start], input[end]);
        start++;
        end--;
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}

