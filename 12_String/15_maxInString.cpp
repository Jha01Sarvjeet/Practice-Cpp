// to find the maximum number in string
#include<iostream>
// #include <bits/stdc++.h> 
#include<string>
#include<vector>

using namespace std;
int main(){
    int n;
     cout<<"enter number of element"<<endl;
     cin>>n;
     vector<string>words(n);
     cout<<"enter element in string"<<endl;
     
     for(int i=0;i<n;i++){
        
        cin>>words[i];
        
     }
      int maxi=stoi(words[0]);
      int idx=0;
     for (int i=0;i<n;i++){
        if(stoi(words[i])>maxi){
                maxi=stoi(words[i]);
                idx=i;
        }
     }
    
     
  
     cout<<"the string with maximum value is "<<maxi<< " at index "<<idx<<endl;
    
     return 0;
}