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

//first approach
// for(int i=0;i<str.length();i++){
//      if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
//           count++;
// }
// cout<<"total Number of vowel =  "<<count<<endl;

int i=0;
while(str[i]!='\0'){
      if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
          count++;
     i++;
}
cout<<"total Number of vowel =  "<<count<<endl;
}
    
   