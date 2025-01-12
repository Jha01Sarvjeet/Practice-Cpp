/*Check if a number is a power of two or not using bitwise operations.*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool powerOf2OrNot(int n){
    if((n&(n-1))==0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cout<<"enter number "<<endl;
    cin>>n;
    if(powerOf2OrNot(n)){
        cout<<"power of 2"<<endl;
    }
    else{
        cout<<"not power of 2"<<endl;
    }
}