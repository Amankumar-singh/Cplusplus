/*
Problem
Chef is watching a football match. The current score is A:BA:B, that is, team 11 has scored AA goals and team 22 has scored BB goals. Chef wonders if it is possible for the score to become C:DC:D at a later point in the game (i.e. team 11 has scored CC goals and team 22 has scored DD goals). Can you help Chef by answering his question?

Input Format
The first line contains a single integer TT - the number of test cases. Then the test cases follow.
The first line of each test case contains two integers AA and BB - the intial number of goals team 11 and team 22 have scored respectively.
The second line of each test case contains two integers CC and DD - the final number of goals team 11 and team 22 must be able to score respectively.
Output Format
For each testcase, output POSSIBLE if it is possible for the score to become C:DC:D at a later point in the game, IMPOSSIBLE otherwise.

You may print each character of POSSIBLE and IMPOSSIBLE in uppercase or lowercase (for example, possible, pOSsiBLe, Possible will be considered identical).

Constraints
1 \leq T \leq 10001≤T≤1000
0 \leq A,B,C,D \leq 100≤A,B,C,D≤10
Sample 1:
Input
Output
3
1 5
3 5
3 4
2 6
2 2
2 2
POSSIBLE
IMPOSSIBLE
POSSIBLE
Explanation:
Test case 1: The current score is 1:51:5. If team 11 scores 22 more goals, the score will become 3:53:5. Thus 3:53:5 is a possible score.

Test case 2: The current score is 3:43:4. It can be proven that no non-negative pair of integers (x, y)(x,y) exists such that if team 11 scores xx more goals and team 22 scores yy more goals the score becomes 2:62:6 from 3:43:4. Thus in this case 2:62:6 is an impossible score.

Test case 3: The current score is already 2:22:2. Hence it is a possible score.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i = 0;i<t;i++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a<=c && b<= d){
	        cout<<"POSSIBLE"<<endl;
	    }
	    else {
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	}
	return 0;
}
