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
string calculate(string val1, string val2, char ch)
{
    string s = "";
    s.push_back(ch);
    return  val1 + val2+s;
}
string infixToPrefix(string str)
{
    stack<string> val;
    stack<char> opr;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if ((int)(ch) >= 48 && (int)(ch) <= 57)
        { // check for digit
            val.push(to_string(ch - 48));
        }
        else
        {
            if (opr.size() == 0 || ch == '(')
            {
                opr.push(ch);
            }
            else if (opr.top() == '(')
            {
                opr.push(ch);
            }
            else if (ch == ')')
            {
                while (opr.top() != '(')
                {
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = calculate(val1, val2, opr.top());
                    opr.pop();
                    val.push(ans);
                }
                opr.pop(); // opening bracket ko hta do
            }

            else if (prio(ch) > prio(opr.top()))
            {
                opr.push(ch);
            }

            else
            {
                while (opr.size() > 0 && prio(opr.top()) >= prio(ch))
                {
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = calculate(val1, val2, opr.top());
                    opr.pop();

                    val.push(ans);
                }
                opr.push(ch);
            }
        }
    }
    while (opr.size() > 0)
    {
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = calculate(val1, val2, opr.top());
        opr.pop();

        val.push(ans);
    }
    return val.top();
}
int main()
{
    string str = "7+(9*4/8)-3";
    string ans = infixToPrefix(str);
    cout << ans << endl;
    // cout << 7 + (9 * 4 / 8) - 3 << endl;
}
