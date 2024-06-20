// Built IN function String
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "hello dear";
    // to find number of character of string   <strname>.length().<strname>.size()

    //  int len1=str.length();
    //  int len2=str.size();
    //  cout<<len1<<" "<<len2<<endl;

    //<strname>.push_back() to add single character at end
    // cout<<str<<endl;
    // str.push_back( '!');
    // cout<<str<<endl;
    //<strname>.pop_back() to remove single character from end
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;

    //'+'  operator:- used to concatinate string
    // str = str + " how are you";
    // cout << str << endl;

    // reverse the string  reverse()
    reverse(str.begin(), str.end());
    cout << str << endl;
    reverse(str.begin(), str.end());
    reverse(str.begin(), str.begin() + 3);
    cout << str << endl;
    return 0;
}