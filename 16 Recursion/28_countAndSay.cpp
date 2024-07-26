/*The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the run-length encoding of countAndSay(n - 1).
Run-length encoding (RLE) is a string compression method that works by replacing
consecutive identical characters (repeated 2 or more times) with the concatenation of
the character and the number marking the count of the characters (length of the run).
For example, to compress the string "3322251" we replace "33" with "23", replace "222" with
"32", replace "5" with "15" and replace "1" with "11". Thus the compressed string becomes
"23321511".

Given a positive integer n, return the nth element of the count-and-say sequence.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string countAndSay(int n)
{
    if (n == 1)
        return "1";
    else
    {
        string prev = countAndSay(n - 1);
        string result = "";
        int freq = 1;
        char str = prev[0];
        for (int i = 1; i < prev.length(); i++)
        {
            char ch = prev[i];
            if (str == ch)
            {
                freq++;
            }
            else
            {
                result += (to_string(freq) + str);
                str = ch;
                freq = 1;
            }
        }
        result += (to_string(freq) + str);
        return result;
    }
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin>>n;
    string ans=countAndSay(n);
    cout<<ans;

    return 0;
}