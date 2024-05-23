/*
MINIMUM LENGTH WORD

Problem statement
Given a string S (that can contain multiple words), you need 
to find the word which has minimum length.

Note : If multiple words are of same length, then answer will 
be first minimum length word in the string. Words are seperated 
by single space only.

Constraints :
1 <= Length of String S <= 10^5


----------------------------------------------------------------
Sample Input 1 :
this is test string
Sample Output 1 :
is
----------------------------------------------------------------


----------------------------------------------------------------
Sample Input 2 :
abc de ghihjk a uvw h j
Sample Output 2 :
a
----------------------------------------------------------------
*/



#include<iostream>
using namespace std;

void minLengthWord(char input[], char output[]){

    int minLen = -1;
    int startIdx = 0;

    int len = 0;
    while (input[len] != '\0') {
        len++;
    }

    for (int i = 0; i <= len; i++) {
        if (input[i] == ' ' || input[i] == '\0') {
            int currentLen = i - startIdx;

            if (minLen == -1 || currentLen < minLen) {
                minLen = currentLen;

                for (int j = 0; j < minLen; j++) {
                    output[j] = input[startIdx + j];
                }
                output[minLen] = '\0';
            }

            startIdx = i + 1;
        }
    }

}

int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}


