// double pointer is used to store address of a pointer
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;
    int **ptr1 = &ptr;
    cout<<a<<endl;
    cout<<ptr<<endl; //print address of a
    cout<<ptr1<<endl;//print address of ptr
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<*ptr<<endl; //print value at ptr
    cout<<**ptr1<<endl;//print value at the address stored by it
   

    return 0;
}