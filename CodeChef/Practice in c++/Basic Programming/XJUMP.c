/* Problem
Chef is currently standing at stair 00 and he wants to reach stair numbered XX.

Chef can climb either YY steps or 11 step in one move.
Find the minimum number of moves required by him to reach exactly the stair numbered XX.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing two space separated integers XX and YY denoting the number of stair Chef wants to reach and the number of stairs he can climb in one move.
Output Format
For each test case, output the minimum number of moves required by him to reach exactly the stair numbered XX.

Constraints
1 ≤  T  ≤ 500
1 ≤ X,Y ≤100
Sample 1: 
Input           Output
4
4 2              2
8 3              4
3 4              3
2 1              2

Explanation:

Test case 11: Chef can make 22 moves and climb 22 steps in each move to reach stair numbered 44.
Test case 22: Chef can make a minimum of 44 moves. He can climb 33 steps in 22 of those moves and 11 step each in remaining 22 moves to reach stair numbered 88.
Test case 33: Chef can make 33 moves and climb 11 step in each move to reach stair numbered 33.
Test case 44: Chef can make 22 moves and climb 11 step in each move to reach stair numbered 22. */

#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i = 0; i<a; i++){
        int x;
        cin>>x;
        int  y;
        cin>>y;
        int d = x/y;
        if (d<1){
            cout<<x<<endl;
        }
        else {
            cout<<x/y + (x-(x/y)*y)<<endl;
        }
        
        
    }
    return 0;
}
