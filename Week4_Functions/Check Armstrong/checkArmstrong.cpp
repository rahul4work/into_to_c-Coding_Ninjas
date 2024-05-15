/*
CHECK ARMSTRONG

Problem statement
You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, 
and 'false' otherwise.


An Armstrong number is a number (with 'k' digits) such that the sum of its 
digits raised to 'kth' power is equal to the number itself. For example, 
371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.


  
--------------------------------------------------------------------------
Sample Input 1 :
1
Sample Output 1 :
true
--------------------------------------------------------------------------


--------------------------------------------------------------------------
Sample Input 2 :
103
Sample Output 2 :
false
--------------------------------------------------------------------------


--------------------------------------------------------------------------
Sample Input 3 :
1634
Sample Output 3 :
true
--------------------------------------------------------------------------
*/


#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iomanip>
using namespace std;

bool checkArmstrong(int n) {
    int orgNum = n;
    int numDigits = 0;
    int sum = 0;

    int temp = n;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    return orgNum == sum;
}

int main() {
    int num;
    cin >> num;
    
    if (checkArmstrong(num)) {
        cout <<"true" << endl;
    } else {
        cout <<"false" << endl;
    }
    
    return 0;
}
