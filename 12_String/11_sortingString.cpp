//to sort string according to ascii value
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
string str;
cout<<"enter string"<<endl;
getline(cin,str);
sort(str.begin(),str.end());
cout<<str<<endl;

    
     return 0;
}