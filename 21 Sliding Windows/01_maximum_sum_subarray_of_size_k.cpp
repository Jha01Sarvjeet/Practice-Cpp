#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// Brute Force Approach

// int maxSumSubArrK(vector<int>&arr, int n, int k)
// {
//     int maxSum= INT_MIN;
//     int idx = -1;
//     for (int i = 0; i <= n - k; i++)
//     {
//         int maxi = 0;
//         for (int j = i; j < i + k; j++)
//         {
//             maxi += arr[j];
//         }
//         if (maxi > maxSum)
//         {
//             maxSum = maxi;
//             idx = i;
//         }
//     }
//     return maxSum;
// }

// Sliding Windoww Approch

int maxSumSubArrK(vector<int> &arr, int n, int k)
{
    int prevWinSum = 0;
    for (int i = 0; i < k; i++)
    {
        prevWinSum += arr[i];
    }
    int i = 1;
    int j = k;
    int maxiSum = prevWinSum;
    while (j < n)
    {
        int curWinSum = prevWinSum + arr[j] - arr[i - 1];
        i++;
        j++;
        maxiSum = max(maxiSum, curWinSum);
        prevWinSum = curWinSum;
    }
    return maxiSum;
}
int main()
{
    vector<int> arr = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = arr.size();

    int k = 3;
    int ans = maxSumSubArrK(arr, n, k);
    cout << "\n"<< ans << endl;
}