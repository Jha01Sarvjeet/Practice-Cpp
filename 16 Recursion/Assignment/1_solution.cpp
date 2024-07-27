/* Write a recursive function to reverse a number.
Avoid preceding 0s in the reversed number.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int reverseNumber(int n, int ans)
{
    if (n == 0)
        return ans;

    else
    {
        int r = n % 10;
        ans = (ans * 10) + r;
        n = n / 10;
        return reverseNumber(n, ans);
    }
}
int main()
{
    int n;
    cout << "enter number" << endl;
    cin>>n;
    int ans=reverseNumber(n,0);
    cout<<ans<<endl;
    return 0;
}