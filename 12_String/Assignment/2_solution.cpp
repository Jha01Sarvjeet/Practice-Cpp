// Input a string of length n and count all the consonants in the given string.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "enter string" << endl;
    cin >> str;
    int cnt = 0;
    for (int i = 0; i < str.length(); i++)

    {
        char c=str[i];
        if (c != 'a' && c != 'e' && c != 'i' &&c != 'o' && c != 'u' &&c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
        {
            cnt++;
        }
    }
    cout<<"NUmber of cosonent -->> "<<cnt<<endl; 
    return 0;
}