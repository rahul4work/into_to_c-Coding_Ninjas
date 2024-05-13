/*
TOTAL SALARY

Problem statement
Write a program to calculate the total salary of a person. The user has to 
enter the basic salary (an integer) and the grade (an uppercase character), 
depending upon which the total salary is calculated as:

Total_salary = Basic + HRA + DA + Allow – PF
where :
HRA   = 20% of basic
DA    = 50% of basic
Allow = 1700 if grade = ‘A’
Allow = 1500 if grade = ‘B’
Allow = 1300 if grade = ‘C' or any other character
PF    = 11% of basic.
Round off the total salary and then print the integral part only.



Note for C++ users :

To round off the value, please include<cmath> library at the start of the 
program and round off the values in this way.
int ans = round(yourFinalValue);


Constraints
0<=salary<=10000



-------------------------------------------------------------------------
Sample Input 1 :
10000 A
Sample Output 1 :
17600
-------------------------------------------------------------------------



-------------------------------------------------------------------------
Sample Input 2 :
4567 B
Sample Output 2 :
8762
-------------------------------------------------------------------------
*/



#include<iostream>
using namespace std;

int main() {
	
	int basicSalary;
    char grade;
    cin >> basicSalary >> grade;

    double hra = 0.2 * basicSalary;
    double da = 0.5 * basicSalary;
    double pf = 0.11 * basicSalary;

    int allow;
    if (grade == 'A') {
        allow = 1700;
    } else if (grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }

    int totalSalary = (basicSalary + hra + da + allow - pf + 0.5);
    cout << totalSalary << endl;

    return 0;
	
}

