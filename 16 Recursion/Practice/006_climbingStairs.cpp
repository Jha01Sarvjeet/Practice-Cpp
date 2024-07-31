/*Calculate the number of ways in which a person can climb n stairs if he can take exactly 
1, 2 or 3 steps at  each level.*/
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int climbing_stairs(int n){
    if(n==1 ||n==0)return 1;
    if(n==2)return 2;
    return climbing_stairs(n-1)+climbing_stairs(n-2)+climbing_stairs(n-3);
}
int main(){
    int n;
    cout<<"enter number of stairs"<<endl;
    cin>>n;
    cout<<climbing_stairs(n)<<endl;
     return 0;
}