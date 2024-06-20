//to display the second half substring
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
string str;
cout<<"enter string :"<<endl;
cin>>str;
int n=str.length();
cout<<str.substr(n/2);

    
     return 0;
}