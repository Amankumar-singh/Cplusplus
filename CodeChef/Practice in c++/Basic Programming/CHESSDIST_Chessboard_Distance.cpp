/*
The Chessboard Distance for any two points (X_1, Y_1)(X 
1
​
 ,Y 
1
​
 ) and (X_2, Y_2)(X 
2
​
 ,Y 
2
​
 ) on a Cartesian plane is defined as max(|X_1 - X_2|, |Y_1 - Y_2|)max(∣X 
1
​
 −X 
2
​
 ∣,∣Y 
1
​
 −Y 
2
​
 ∣).

You are given two points (X_1, Y_1)(X 
1
​
 ,Y 
1
​
 ) and (X_2, Y_2)(X 
2
​
 ,Y 
2
​
 ). Output their Chessboard Distance.

Note that, |P|∣P∣ denotes the absolute value of integer PP. For example, |-4| = 4∣−4∣=4 and |7| = 7∣7∣=7.

Input Format
First line will contain TT, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input containing 44 space separated integers - X_1, Y_1, X_2, Y_2X 
1
​
 ,Y 
1
​
 ,X 
2
​
 ,Y 
2
​
  - as defined in the problem statement.
Output Format
For each test case, output in a single line the chessboard distance between (X_1, Y_1)(X 
1
​
 ,Y 
1
​
 ) and (X_2, Y_2)(X 
2
​
 ,Y 
2
​
 )

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq X_1, Y_1, X_2, Y_2 \leq 10^51≤X 
1
​
 ,Y 
1
​
 ,X 
2
​
 ,Y 
2
​
 ≤10 
5
 
Subtasks
Subtask #1 (100 points): original constraints

Sample 1:
Input
Output
3
2 4 5 1
5 5 5 3
1 4 3 3
3
2
2
*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int d = x1-x2;
	    int e = y1 - y2;
	    if (d<0){
	        d = -(d);
	    }
	    if (e<0){
	        e = -(e);
	    }
	    if (d>e){
	        cout<<d<<endl;
	    }
	    else cout<<e<<endl;
	}
	return 0;
}
