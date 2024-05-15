/*
FIBONACCI NUMBER

Problem statement
Create a function that determines whether a given number N belongs to 
the Fibonacci sequence. If N is found in the Fibonacci sequence, the 
function should return true; otherwise, it should return false.


Constraints :
0 <= n <= 10^4


---------------------------------------------------------------------
Sample Input 1 :
5
Sample Output 1 :
true
---------------------------------------------------------------------


---------------------------------------------------------------------
Sample Input 2 :
14
Sample Output 2 :
false
---------------------------------------------------------------------
*/


#include<iostream>
using namespace std;

bool checkMember(int n){

  if (n==0 || n == 1) {
        return true; 
    }

    int a = 0, b = 1, c;

    while (true) {
        c = a + b;
        if (c == n) {
            return true; 
        } 
        else if (c > n) {
            return false; 
        }
        
        a = b;
        b = c;
    }

}

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}

