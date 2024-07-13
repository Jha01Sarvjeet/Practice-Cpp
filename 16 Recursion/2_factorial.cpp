//to print factotail of a number

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;
cout<<factorial(n)<<endl;    
     return 0;
}
