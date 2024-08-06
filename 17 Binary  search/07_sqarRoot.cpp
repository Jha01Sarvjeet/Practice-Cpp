// to find the square root
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sqrRoor(int x)
{
    long long  s = 0;
    long long int e = x / 2;
    long long int  mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        if (mid * mid == x)
            return mid;
        else if (mid * mid < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    cout<<sqrRoor(0);

    return 0;
}
