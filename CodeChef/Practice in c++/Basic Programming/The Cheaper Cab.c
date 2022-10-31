/* 
Problem
Chef has to travel to another place. For this, he can avail any one of two cab services.

The first cab service charges X rupees.
The second cab service charges Y rupees.
Chef wants to spend the minimum amount of money. Which cab service should Chef take?

Input Format
The first line will contain T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers X and Y - the prices of first and second cab services respectively.
Output Format
For each test case, output FIRST if the first cab service is cheaper, output SECOND if the second cab service is cheaper, output ANY if both cab services have the same price.

You may print each character of FIRST, SECOND and ANY in uppercase or lowercase (for example, any, aNy, Any will be considered identical).

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq X, Y \leq 1001≤X,Y≤100
Sample 1:
Input     Output
3
30 65    FIRST
42 42    ANY
90 50    SECOND

Explanation:
Test case 11: The first cab service is cheaper than the second cab service.
Test case 22: Both the cab services have the same price.
Test case 33: The second cab service is cheaper than the first cab service.


*/
#include <iostream>
using namespace std;
int main(){
    int no_of_case;
    cin>>no_of_case;
    for(int i=0;i<no_of_case;i++){
        int price_of_first_cab;
        int price_of_second_cab;
        cin>>price_of_first_cab;
        cin>>price_of_second_cab;
        if(price_of_first_cab == price_of_second_cab) {
            cout<<"ANY" <<endl;
        }
        else if(price_of_first_cab > price_of_second_cab){
            cout<<"SECOND"<<endl;
        }
        else {
            cout<<"FIRST"<<endl;
        }
    }
    return 0;
}
