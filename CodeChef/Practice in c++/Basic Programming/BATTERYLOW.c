/*
Problem
Chef's phone shows a Battery Low notification if the battery level is 15 \%15% or less.

Given that the battery level of Chef's phone is X \%X%, determine whether it would show a Battery low notification.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains a single line of input, an integer XX, denoting the battery level of the phone.
Output Format
For each test case, output in a single line \texttt{Yes}Yes, if the battery level is 15 \%15% or below. Otherwise, print \text{No}No.

You may print each character of \texttt{Yes}Yes and \text{No}No in uppercase or lowercase (for example, \texttt{YeS}YeS, \texttt{YES}YES, \texttt{yes}yes will be considered identical).

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq X \leq 1001≤X≤100
Subtasks
Subtask #1 (100 points): original constraints

Sample 1:
Input
Output
3
15
3
65
Yes
Yes
No
Explanation:
Test Case 1: The battery level is 1515. Thus, it would show a battery low notification.

Test Case 2: The battery level is 33, which is less than 1515. Thus, it would show a battery low notification.

Test Case 3: The battery level is 6565, which is greater than 1515. Thus, it would not show a battery low notification.
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int c;
	    cin>>c;
	    if(c>15) {cout<<"NO"<<endl;}
	    else {cout<<"YES"<<endl;}
	}
	return 0;
}
