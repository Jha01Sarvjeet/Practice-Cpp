//to print the Gcd of two number
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void Gcd(int a,int b){
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            cout<<i<<endl;
            break;
            
        }
    }
}
int main(){
int a,b;
cout<<"enter a,b"<<endl;
cin >>a;
cin>>b;
Gcd(a,b);
    
     return 0;
}