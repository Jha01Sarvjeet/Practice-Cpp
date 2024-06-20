//to reverse fform 2 to 5
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
string str;
cout<<"enter string of length more than 5"<<endl;
cin>>str;
int len=str.length();
cout<<str<<endl;
reverse(str.begin()+2,str.begin()+6);
cout<<str<<endl;
     return 0;
}