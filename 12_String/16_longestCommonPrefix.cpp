// to find the longest common prefix from n string stored in array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter number of element" << endl;
    cin >> n;
    vector<string> words(n);
    cout << "enter element in string" << endl;

    for (int i = 0; i < n; i++)
    {

        cin >> words[i];
    }
    //sorting all element
    sort(words.begin(),words.end());

    //now comparingf first and last string after sorting
    string first=words[0];
    string last=words[n-1];
    string ans="";
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]==last[i]){
            ans=ans+first[i];
        }
    }
    cout<<"the longest common prefix is "<<ans<<endl;

    return 0;
}