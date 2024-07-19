// to print the substring of a string;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void substringOfString(string answer, string original)
{
    if (original.length() == 0)
    {
        cout << answer << endl;
        return;
    }
    char ch = original[0];
    // substringOfString(answer + ch, original.substr(1));
    // substringOfString(answer, original.substr(1));

    substringOfString(answer, original.substr(1));
    substringOfString(answer + ch, original.substr(1));
}
int main()
{
    string str;
    cout << "enter string" << endl;
    getline(cin, str);
    cout << '\n';
    substringOfString("", str);

    return 0;
}