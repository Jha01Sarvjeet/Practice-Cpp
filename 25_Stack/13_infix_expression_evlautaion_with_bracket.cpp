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
int infixEvaluation(string str)
{
    stack<int> val;
    stack<char> opr;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if ((int)(ch) >= 48 && (int)(ch) <= 57)
        { // check for digit
            val.push(ch - 48);
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
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = calculate(val1, val2, opr.top());
                    opr.pop();
                    // opr.pop();
                    val.push(ans);
                }
                opr.pop();
            }
            else if (prio(ch) > prio(opr.top()))
            {
                opr.push(ch);
            }

            else
            {
                while (opr.size() > 0 && prio(opr.top()) >= prio(ch))
                {
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = calculate(val1, val2, opr.top());
                    opr.pop();
                    val.push(ans);
                }
                opr.push(ch);
            }
        }
    }
    while (opr.size() > 0)
    {
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = calculate(val1, val2, opr.top());
        opr.pop();
        val.push(ans);
    }
    return val.top();
}
int main()
{
    string str = "7+(9*4/8)-3";
    int ans = infixEvaluation(str);
    cout << ans << endl;
    cout << 7 + (9 * 4 / 8) - 3 << endl;
}
