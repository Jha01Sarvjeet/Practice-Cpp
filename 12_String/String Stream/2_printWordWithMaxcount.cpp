//to print the words with maximum number if frequency i the sentence
#include<iostream>
#include <bits/stdc++.h> 
#include<sstream>
#include<string>
using namespace std;
int main(){
string str;
cout<<"enter string"<<endl;
getline(cin,str);//to get input cintaining space
stringstream s(str);
map<string ,int>mpp;
string temp;
while(s>>temp){
    mpp[temp]++;
}
int maxFreq=0;
string st;
for(auto i :mpp){
    if(i.second>maxFreq){
        maxFreq=i.second;
        st=i.first;
    }
}
cout<<"words having maximum count is \" "<<st<<" \"and count is "<<maxFreq<<endl; 
    
     return 0;
}