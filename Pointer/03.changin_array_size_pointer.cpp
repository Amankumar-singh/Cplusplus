/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
    int a[5] ;
    // a[10] ;  this will ahow error because array(which in stack) once's we declear size we can't change it's size
    
    // so we can do other method for user purpose that user can enter array size
    int size;
    cout<<"Enter the number of elemrnt you want in array" << endl ;
    cin>>size ;
    int A[size] ;
    cout<<sizeof(A)/ sizeof(A[0]);
    
    // using pointer we can change array size let's see how
    int *p = new int[5];
    delete []p;
    p=new int[10];
};