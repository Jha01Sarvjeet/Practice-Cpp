//to print 1 to N
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void print1ToN(int n){
    if(n==0)return;
    print1ToN(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    print1ToN(n);
    
     return 0;
}