// Nth Stair Problem
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int NthStairs(int n){
    if(n<=1)return 1;
    else if(n==2)return 2;
    else{
        return NthStairs(n-1)+NthStairs(n-2);
    }
}
int main()
{
    int n;
    cout<<"enter number of stairs"<<endl;
    cin>>n;
    int ans=NthStairs(n);
    cout<<"Number of ways to reach top of stairs is :"<<ans;
    

    return 0;
}