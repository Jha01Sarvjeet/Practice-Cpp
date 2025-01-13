#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/*to check that the number is prime or not*/
bool primeOrNot(int n){
    if(n==1)return false;
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
        
    }
    return true;
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    if(primeOrNot(n))cout<<"it's a prime number"<<endl;
    else cout<<"it's not a prime number"<<endl;
}