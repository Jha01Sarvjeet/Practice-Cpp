// to print the permutation of string
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void permutation(string ans, string original)
{
    if (original == "")
    {
        cout << ans<<endl;
        return;
    }
    int n = original.length();
    for (int i = 0; i < n; i++)
    {
        char ch = original[i];
        string left = original.substr(0, i);
        string right = original.substr(i + 1);
        permutation(ans + ch, left + right);
    }
}
int main()
{
    string str = "abcd"; 
    permutation("",str);

    return 0;
}