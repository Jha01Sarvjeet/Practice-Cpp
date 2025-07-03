#include<bits/stdc++.h>
#include <iostream>
using namespace std;
  bool isValid(string s) {
        stack<char>st;
        if(s.size()%2!=0)return false;// string of odd length
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
                st.push(s[i]);
            }
            else{
                if(st.empty())return false;// in case stack is empty and first cahracter is closing
                char t=st.top();
                if((t=='(' && s[i]==')' )||(t=='{' && s[i]=='}' ) || (t=='[' && s[i]==']' ) ){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
int main(){
    // string s="([]}[]{}";
    string s="()[]{}";
    if (isValid(s)){
        cout<<"Valid"<<endl;
    }
    else cout<<"invalid"<<endl;
}