#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int maxSatisfaction(vector<int> &satisfaction)
{
    int n = satisfaction.size();
    sort(satisfaction.begin(), satisfaction.end());
    vector<int> suf(n, 0);
    suf[n - 1] = satisfaction[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1] + satisfaction[i];
    }
    int idx = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (suf[i] < 0)
        {
            idx = i + 1;
            break;
        }
    }
    int maxSat = 0;
    if (idx == -1)
    {
        int c = 1;

        for (int i = 0; i < n; i++)
        {
            maxSat += satisfaction[i] * c++;
        }
    }
    else
    {
        int c = 1;

        for (int i = idx; i < n; i++)
        {
            maxSat += satisfaction[i] * c++;
        }
    }

    return maxSat;
}
int main()
{
    vector<int> satisfaction = {-1,-8,0,5,-9};
    int ans = maxSatisfaction(satisfaction);
    cout << ans << endl;
}