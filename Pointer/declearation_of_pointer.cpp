/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    int a = 10 ;
    int *p =  &a; // here we declear a pointer and initiallising a pointer
    cout<<a<<endl ; // printing the value store in variable a
    cout<<&a<<endl; // here we printing address of a
    cout<<p<<endl; // here we printing address ehich is store in pointer p
    cout<<&p<<endl; // here we printing address of pointer p
    cout<<*p<<endl; // here we Derefrencing the pointer means it will give value of variable ehich location is store
                    // in this case it will give 1o
}