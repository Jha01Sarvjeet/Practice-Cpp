/*To find the Permutation and combination*/
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int factorial(int n){
    int f=1;
    if(n==0)
        return 1;
    for(int i=2;i<=n;i++){
        f*=i;

    }
    return f;
}
int main(){
    int n,r;
    cout<<"enter the n"<<endl;
    cin>>n;
    cout<<"enter the r"<<endl;
    cin>>r;
    int npr=(factorial(n)/factorial(n-r));
    int ncr=(factorial(n)/(factorial(r)*factorial(n-r)));
    cout<<"npr=: "<<npr<<endl;
    cout<<"ncr=: "<<ncr<<endl;
     return 0;
}