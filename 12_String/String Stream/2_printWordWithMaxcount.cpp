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
//solved using map
// map<string ,int>mpp;
// string temp;
// while(s>>temp){
//     mpp[temp]++;
// }
// int maxFreq=0;
// string st;
// for(auto i :mpp){
//     if(i.second>maxFreq){
//         maxFreq=i.second;
//         st=i.first;
//     }
// }
// cout<<"words having maximum count is \" "<<st<<" \"and count is "<<maxFreq<<endl; 


//solving usiing vector
vector<string >vec;
string temp;
while(s>>temp){
    vec.push_back(temp);
}
sort(vec.begin(),vec.end());
int maxi=0;
int count=1;
for(int i=0;i<vec.size();i++){
    if(vec[i]==vec[i+1]){
        count++;
        maxi=max(count,maxi);

    }
    else{
      count=1;  
    }
}
cout<<"words having maximum count is" <<maxi<<endl; 

    
     return 0;
}