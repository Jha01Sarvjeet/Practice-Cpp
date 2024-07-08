// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    bool flag=true;
    cout << "enter string s" << endl;
    cin >> s;
    cout << "enter string t" << endl;
    cin >> t;
    vector<int>vec(200,1000);
    //checking with perspetive of s
    if(s.length()!=t.length())return false;
    for(int i=0;i<s.length();i++){
        int ascii=(int)s[i]-(int)t[i];
        if(vec[(int)s[i]]==1000 ){
            vec[(int)s[i]]=ascii;
        }
        else if(vec[(int)s[i]]!=ascii){
            cout<<"not isomorphic"<<endl;
            flag=false;
            break;
        }
    }
    //checking with perspetive of t
    for(int i=0;i<vec.size();i++){
        vec[i]=1000;

    }
    for(int i=0;i<t.length();i++){
        int ascii=(int)t[i]-(int)s[i];
        if(vec[(int)t[i]]==1000 ){
            vec[(int)t[i]]=ascii;
        }
        else if(vec[(int)t[i]]!=ascii){
            cout<<"not isomorphic"<<endl;
            flag=false;
            break;
        }
    }
    //if not returned false
    if(flag==true)
        cout<<"isomorphic"<<endl;


    return 0;
}