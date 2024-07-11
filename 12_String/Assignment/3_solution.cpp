// Check whether the given string is palindrome or not.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "enter string" << endl;
    cin >> str;
    int s=0;
    int e=str.length()-1;
    bool flag=true;
    while(s<e){
        if(str[s++]!=str[e--]){
            cout<<"Not pallindrom"<<endl;
            flag=false;
            break;

        }
    }
    if(flag==true)
    cout<<"pallindrom"<<endl;

    return 0;
}