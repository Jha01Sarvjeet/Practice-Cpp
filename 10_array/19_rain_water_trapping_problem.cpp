#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int rainWatertrapping(vector<int> nums)
{
     int n = nums.size();
     int ans = 0;
     vector<int> prev(nums.size());
     vector<int> next(nums.size());
     int Max = nums[n - 1];
     next[n - 2] = -1;
     for (int i = n - 2; i >= 0; i--)
     {
          next[i] = Max;
          Max = max(Max, nums[i]);
     }
     prev[0] = -1;
     Max = nums[0];
     for (int i = 1; i < n; i++)
     {
          prev[i] = Max;
          Max = max(Max, nums[i]);
     }
     for (int i = 1; i < n - 1; i++)
     {
          prev[i] = min(prev[i], next[i]);
     }
     for (int i = 1; i < n - 1; i++)
     {
          if (nums[i] < prev[i])
          {
               ans += prev[i] - nums[i];
          }
     }

     return ans;
}

int main()
{
     vector<int> nums = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
     int ans = rainWatertrapping(nums);
     cout << ans;

     return 0;
}