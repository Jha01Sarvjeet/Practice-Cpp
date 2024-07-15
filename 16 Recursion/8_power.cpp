//to print the x^n
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int pow(int base,int power){
    if(base==0)return 0;
    if(power==0)return 1;
    int temp=pow(base,power/2);
    if(power&1)return base*temp*temp;
    else{
        return temp*temp;
    }
}
int main(){
    int base,n;
    cout<<"enter base"<<endl;
    cin>>base;
    cout<<"enter power";
    cin>>n;
    cout<<pow(base,n)<<endl;

    
     return 0;
}