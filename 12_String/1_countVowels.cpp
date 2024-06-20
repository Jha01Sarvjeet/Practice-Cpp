//to count vovels in string
#include<iostream>
#include<string>
#include <bits/stdc++.h> 

using namespace std;
int main(){
string str;
int count=0;
cout<<"enter string "<<endl;
cin>>str;
for(int i=0;i<str.length();i++){
     if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
          count++;
}
cout<<"total Number of vowel =  "<<count<<endl;

    
     return 0;
}