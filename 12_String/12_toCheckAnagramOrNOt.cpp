//to check that the given two string s and t  are anagram or not
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
string s;
string t;

cout<<"enter string s"<<endl;
cin>>s;
cout<<"enter string t"<<endl;
cin>>t;
sort(s.begin(),s.end());
sort(t.begin(),t.end());
if(s==t){
    cout<<"strings are anagram"<<endl;
}
else{
    cout<<"string are not anagram"<<endl;
}
    
     return 0;
}