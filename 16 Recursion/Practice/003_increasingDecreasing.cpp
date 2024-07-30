// print increasing decreasing for n=5 :-123454321

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void printSequence(int n,int i){
    if(i>n)return;
    cout<<i<<" ";
    printSequence(n,i+1);
    if(i!=1){i=i-1;
    cout<<i<<" ";}
}
int main(){
printSequence(5,1);
    

     return 0;
}