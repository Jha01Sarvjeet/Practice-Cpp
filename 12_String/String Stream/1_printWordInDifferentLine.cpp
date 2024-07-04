//String stream is used to handle te words of string containing space
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//task is to print the wrods of this string in diffrent line
#include<sstream>
int main(){
string str;
cout<<"enter string"<<endl;
getline(cin,str);//to get input cintaining space

string temp;
stringstream s(str);
while(s>>temp){
    cout<<temp<<endl;
}    
     return 0;
}