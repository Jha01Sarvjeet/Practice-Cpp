#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int prio(char ch1)
{
    if (ch1 == '*' || ch1 == '/')
        return 2;
    else
        return 1;
}
int calculate(int val1, int val2, char ch)
{
    if (ch == '*')
        return val1 * val2;
    if (ch == '+')
        return val1 + val2;
    if (ch == '-')
        return val1 - val2;
    if (ch == '/')
        return val1 / val2;
}
int postfix_evaluationx(string str)
{
    stack<int> val;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if ((int)(ch) >= 48 && (int)(ch) <= 57)
        { // check for digit
            val.push((ch - 48));
        }
        else
        {
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = calculate(val1, val2, ch);
            val.push(ans);

        }
    }
    return val.top();
}
int main()
{
    string str = "79+4*8/3-";
    int ans = postfix_evaluationx(str);
    cout << ans << endl;
    // cout << 7 + (9 * 4 / 8) - 3 << endl;
}
