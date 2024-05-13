/*
REMARK STUDENTS

Problem statement
Teacher is remarking students on the basis of their score. Criteria for remarking 
students are as follows:

If the score is greater than 75 up to 100 then it will be remarked ‘Distinction’.

If the score is greater than 50 up to 75 then it will remarked ‘Average’

If the score is between 35 to 50 then it will be remarked ‘Below Average’.


Constraints:
35<=score[i]<=100


----------------------------------------------------------------------------------
Sample Input1:
36
Sample Output 1:
Below Average
----------------------------------------------------------------------------------



----------------------------------------------------------------------------------
Sample Input2:
76
Sample Output 2:
Distinction
----------------------------------------------------------------------------------
*/



#include<iostream>
using namespace std;

int main() {

	int score;
	cin>>score;

	if(score>75 & score<100) {
		cout<<"Distinction";
	}

	else if(score>50 & score<75){
		cout<<"Average";
	}

	else if(score>35 & score<50){
		cout<<"Below Average";
	}
	
}
