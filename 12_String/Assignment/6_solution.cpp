// Input a string and concatenate with its reverse string and print it.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
   
    cout << "enter string" << endl;
    string ans="";
    cin >> str;
    string temp=str;
    int s=0;
    int e=str.length()-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
    ans.append(temp);
    ans.append(str);
    cout<<ans<<endl;
    return 0;
}