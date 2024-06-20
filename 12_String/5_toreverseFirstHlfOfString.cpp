//to reverse first half of the string
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
string str;
cout<<"enter string"<<endl;
cin>>str;
int len=str.length();
cout<<str<<endl;
reverse(str.begin(),str.begin()+(len/2));
cout<<str<<endl;
     return 0;
}