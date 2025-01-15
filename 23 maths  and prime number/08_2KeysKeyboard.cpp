/* 2 Keys Keyboard
There is only one character 'A' on the screen of a notepad. You can perform one of two operations on this notepad for each step:
Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).
Paste: You can paste the characters which are copied last time.
Given an integer n, return the minimum number of operations to get the character 'A' exactly n times on the screen.

Input: n = 3
Output: 3
Explanation: Initially, we have one character 'A'.
In step 1, we use Copy All operation.
In step 2, we use Paste operation to get 'AA'.
In step 3, we use Paste operation to get 'AAA'.
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// finding highest factor except self
int gd(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return (n / i);
            
    }
}
bool primeOrNot(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int minSteps(int n)
{
    int count = 0;
    while (n > 1)
    {
        if (primeOrNot(n))
        {
            count += n;
            break;
        }
        int hf = gd(n);
        count += (n / hf);
        n = hf;
    }
    return count;
}

int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    int result = minSteps(n);
    cout << result << endl;
}
