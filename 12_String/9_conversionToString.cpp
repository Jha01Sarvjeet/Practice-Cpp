#include<iostream>
#include <bits/stdc++.h> 
//to convert into string
using namespace std;
int main(){
int a=9846464;
cout<<a<<endl;
string str=to_string(a);

cout<<str<<endl;
cout<<str.length()<<endl;

//count total number of digit without using loop
int n;
cout<<"enter number"<<endl;
cin>>n;
cout<<"length of string is "<<(to_string(n)).length()<<endl;

    
     return 0;
}