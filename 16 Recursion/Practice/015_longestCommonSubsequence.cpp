//loongest common sequence
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int longestCommonSubsequencde(string a,string b,int i,int j){
    if(i==a.length()|| j==b.length())return 0;
    if(a[i]==b[j]){
        return 1+ longestCommonSubsequencde( a, b, i+1, j+1);
    }
    return max(longestCommonSubsequencde( a, b, i+1, j),longestCommonSubsequencde( a, b, i, j+1));
}   
int main(){
string a,b;
cout<<"enter string a"<<endl;
cin>>a;
cin>>b;
cout<<longestCommonSubsequencde(a,b,0,0);
    
     return 0;
}