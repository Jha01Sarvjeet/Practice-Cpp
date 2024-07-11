// Input a string and return the number of substrings that contain only vowels.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// naive approach
bool isvowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return true;
    }
    return false;
}
bool isValid(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (!isvowel(str[i]))
            return false;
    }
    return true;
}
int main()
{
    string str;
    int count = 0;
    cout << "enter string" << endl;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        string temp = "";
        for (int j = i; j < str.length(); j++)
        {

            temp += str[j];
            if (isValid(temp))
            {
                count++;
            }
        }
    }
    cout << "total count of substring that contains only vowels " << count << endl;
}
/*#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin >> s;
int ans = 0, l = 0;
for (int i = 0; i < (int)s.size(); i++) {
if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
s[i] == 'u')
l++;
else {
ans = l * (l + 1) / 2;
l = 0;
}
}
ans += l * (l + 1) / 2;
cout << ans;
}*/