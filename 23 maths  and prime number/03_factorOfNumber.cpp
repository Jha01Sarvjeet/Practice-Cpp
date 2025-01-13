/*to find the all factorof given number*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void factor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0)cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    factor(n);

}
