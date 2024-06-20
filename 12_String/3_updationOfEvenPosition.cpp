//to update all even position of string with 'a'
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
string str;
cout<<"enter string"<<endl;
cin>>str;
cout<<str<<endl;
   
for(int i=0;i<str.length();i++){
     if(i%2==0){
        str[i]='a';
     }
}
cout<<str<<endl;

     return 0;
}