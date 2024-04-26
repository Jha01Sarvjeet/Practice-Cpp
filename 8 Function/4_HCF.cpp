#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int HCF(int x,int y){
    int ans=0;
    for(int i=1;i<=x && i<=y;i++){
        if(x%i==0 && y%i ==0){
            ans=i;
        }
    }
    return ans;
}
int main(){
    cout<<HCF(3,5);
     return 0;
}