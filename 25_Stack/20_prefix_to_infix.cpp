#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string calculate(string val1,string val2,char ch){
    string s="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;
   
    
}
string prefixToInfix(string str)
{
    stack<string> val;
    for (int i = str.length()-1; i >=0 ; i--)
    {
        char ch = str[i];
        if (ch >= 48 && ch <= 57)
        {
            val.push(to_string(ch-48));
        }
        else
        {
            string val1=val.top();
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=calculate(val1,val2,ch);
            val.push(ans);
        }
    }
    return val.top();
}
int main()
{
    string s="-/*+79483";
    cout<<prefixToInfix(s)<<endl;
}