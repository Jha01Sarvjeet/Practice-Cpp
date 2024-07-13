//print sum from 1to N

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int sum1ToN(int n){
    if(n==0)return 0;
    return (n+sum1ToN(n-1));
    
    
}

//without return
int sum1ToN(int n,int sum){
    if(n==0){
        cout<<sum<<endl;
        return 0;
    }
    
    sum1ToN(n-1,n+sum);
    
    
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    // cout<<sum1ToN(n)<<endl;
    sum1ToN(n,0);
    
     return 0;
}