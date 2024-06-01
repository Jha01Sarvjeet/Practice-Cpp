#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int rainWatertrapping(vector<int> nums)
{
     int n = nums.size();
     int ans = 0;
     vector<int> prev(nums.size());
     // vector<int> next(nums.size());

     int Max = nums[0];
     // finding prev maximum
     prev[0] = -1;
     for (int i = 1; i < n; i++)
     {
          prev[i] = Max;
          Max = max(Max, nums[i]);
     }
     Max = nums[n - 1];
     prev[n - 1] = -1;

     // finding next maximum
     for (int i = n - 2; i >= 0; i--)
     {
          prev[i]=min(Max,prev[i]);
          Max = max(Max, nums[i]);

     }
     
     // for (int i = 1; i < n - 1; i++)
     // {
     //      prev[i] = min(prev[i], prev[i]);
     // }
     for (int i = 1; i < n - 1; i++)
     {
          if (nums[i] < prev[i])
          {
               ans += prev[i] - nums[i];
          }
     }

     return ans;
     // return next_permutation(nums);
}

int main()
{
     // vector<int> nums = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
     vector<int> nums = {1,8,6,2,5,4,8,3,7};
     int ans = rainWatertrapping(nums);
     cout << ans;

     return 0;
}