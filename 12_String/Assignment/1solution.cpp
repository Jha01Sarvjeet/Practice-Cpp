//Input a string of size n and update all the odd positions in the string to character ‘#’. 
//Consider 0-based indexing.

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
string str;
cout<<"enter string"<<endl;
cin>>str;
for (int i=0;i<str.length();i++){
    if(i&1){
        str[i]='#';
    }
}
cout<<"MOdified string "<<str<<endl;
    
     return 0;
}