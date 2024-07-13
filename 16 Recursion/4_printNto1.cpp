//to print N to 1
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void print1ToN(int n){
    if(n==0)return;
    cout<<n<<endl;
    print1ToN(n-1);
    
    
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    print1ToN(n);
    
     return 0;
}