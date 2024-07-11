//Input a string of length less than 10 and convert
// it into integer without using builtin function.
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
string str;
cout<<"enter number"<<endl;
cin>>str;
int ans=0;
for (int i=0;i<str.length();i++){
    ans=(ans*10)+(int)str[i]-(int)'0';
}
cout<<"string in number "<<ans<<endl;
    
     return 0;
}