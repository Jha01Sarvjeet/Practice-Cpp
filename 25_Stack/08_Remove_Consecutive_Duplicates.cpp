#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string removeConsecutiveDuplicate(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty() || st.top() != s[i])
        {
            st.push(s[i]);
        }
        
    }
    s = "";
    while (!st.empty())
    {
        s = s + st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    string s="aaabbcdd";
    string ans=removeConsecutiveDuplicate(s);
    cout<<s<<endl;
    cout<<ans<<endl;
}