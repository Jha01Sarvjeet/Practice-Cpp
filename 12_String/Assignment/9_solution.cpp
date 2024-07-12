// Given a sentence ‘str’, return the word that is lexicographically maximum.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "enter string" << endl;
    getline(cin, str);
    string maxi="", word = "";
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            maxi = max(maxi, word);
            word = "";
        }
        else
        {
            word += str[i];
        }
    }
    maxi = max(maxi, word);
    cout<<"Lexicographicallly maximum word is "<<maxi<<endl;

    return 0;
}