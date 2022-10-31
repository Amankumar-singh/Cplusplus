/*
Problem
Chef is playing a videogame, and is getting close to the end. He decides to finish the rest of the game in a single session.

There are XX levels remaining in the game, and each level takes Chef YY minutes to complete. To protect against eye strain, Chef also decides that every time he completes 33 levels, he will take a ZZ minute break from playing. Note that there is no need to take this break if the game has been completed.

How much time (in minutes) will it take Chef to complete the game?

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of input will contain three space-separated integers XX, YY, and ZZ.
Output Format
For each test case, output on a new line the answer — the length of Chef's gaming session.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq X \leq 1001≤X≤100
5 \leq Y \leq 1005≤Y≤100
5 \leq Z \leq 155≤Z≤15
Sample 1:
Input
Output
4
2 12 10
3 12 10
7 20 8
24 45 15
24
36
156
1185
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    if(X<=3){
	        cout<<X*Y<<endl;
	    }
	    else if(X%3==0){
	        int d = X/3;
            cout<< X*Y + (d-1)*Z<<endl;
	    }
	    else{
	        int d = X/3;
            cout<< X*Y + d*Z<<endl;
	    }
	}
	return 0;
}
