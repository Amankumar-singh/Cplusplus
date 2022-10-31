/*
Problem
There is a group of NN friends who wish to enroll in a course together. The course has a maximum capacity of MM students that can register for it. If there are KK other students who have already enrolled in the course, determine if it will still be possible for all the NN friends to do so or not.

Input Format
The first line contains a single integer TT - the number of test cases. Then the test cases follow.
Each test case consists of a single line containing three integers NN, MM and KK - the size of the friend group, the capacity of the course and the number of students already registered for the course.
Output Format
For each test case, output Yes if it will be possible for all the NN friends to register for the course. Otherwise output No.

You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical).

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq N \leq M \leq 1001≤N≤M≤100
0 \leq K \leq M0≤K≤M
Sample 1:
Input
Output
3
2 50 27
5 40 38
100 100 0
Yes
No
Yes
Explanation:
Test Case 1: The 22 friends can enroll in the course as it has enough seats to accommodate them and the 2727 other students at the same time.

Test Case 2: The course does not have enough seats to accommodate the 55 friends and the 3838 other students at the same time.

*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int m;
	    int k;
	    int n;
	    cin>>n>>m>>k;
	    int c=m-(k+n);
	    if(c>=0){
	       cout<<"YES"<<endl; 
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}
