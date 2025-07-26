#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int calculate(int val1,int val2,char ch){
    if (ch == '*')
        return val1 * val2;
    if (ch == '+')
        return val1 + val2;
    if (ch == '-')
        return val1 - val2;
    if (ch == '/')
        return val1 / val2;
   
    
}
int prefixCalculation(string str)
{
    stack<int> val;
    for (int i = str.length()-1; i >=0 ; i--)
    {
        char ch = str[i];
        if (ch >= 48 && ch <= 57)
        {
            val.push(ch-48);
        }
        else
        {
            int val1=val.top();
            val.pop();
            int val2=val.top();
            val.pop();
            int ans=calculate(val1,val2,ch);
            val.push(ans);
        }
    }
    return val.top();
}
int main()
{
    string s="-/*+79483";
    cout<<infixCalculation(s)<<endl;
}