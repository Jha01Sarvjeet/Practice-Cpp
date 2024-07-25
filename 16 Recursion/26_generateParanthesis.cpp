//to generate the valid parenthesis
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void generateParenthesis(string ans,int open,int close,int n){
    if( close == n){
        cout<<ans<<endl;
        return;
    }
    if( open<n){
        generateParenthesis(ans+'(',open+1,close,n);
       
    }
    if(close <open && close != n) generateParenthesis(ans+')',open,close+1,n);
  
}
int main(){
int n;
cout<<"enter no of pairs of parenthesis"<<endl;
cin>>n;

    generateParenthesis("",0,0,n);
     return 0;
}