//count and say
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
string countAndSay(int n){
    if(n==1){
        return "1";
    }
    string prev=countAndSay(n-1);
    char ch=prev[0];
    int count=1;
    string result="";
    for(int i=1;i<prev.length();i++){
        if(prev[i]==ch){
            count++;
        }
        else{
            result+=(to_string(count) + ch);
            count=1;
            ch=prev[i];
        }
    }
    result+=(to_string(count) + ch);
    return result;
}
int main(){
    cout<<countAndSay(4);
     return 0;
}