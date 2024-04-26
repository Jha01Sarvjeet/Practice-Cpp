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
int LCM(int x,int y){
    int ans=(x*y)/HCF(x,y);
    return ans;
}
int main(){
    cout<<LCM(2,4);
     return 0;
}