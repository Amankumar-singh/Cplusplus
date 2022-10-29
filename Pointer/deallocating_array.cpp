/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5];
    // p = null ; // if we do this then that array will remain in heap till program running 
    delete []p; // so here first we deallocating 
    p = nullptr ; // nullptr is stander keybord to assign null to pointer in c++
    return 0 ;
}