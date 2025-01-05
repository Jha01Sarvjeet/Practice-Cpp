#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/* Max Consecutive Ones
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in
the array if you can flip at most k 0's.
Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
*/
int longestOnes(vector<int> &nums, int k)
{
    int i=0;
    int j = 0;
    int zeroCount = 0;
    int n = nums.size();
    int maxLength = INT_MIN;
    while (j < n)
    {

        if (nums[j] == 0 && zeroCount < k)
        {
            zeroCount++;
            j++;
        }
        else if (nums[j] == 1)
            j++;
        else if (zeroCount >= k)
        {
            maxLength = max(maxLength, j - i);
            while (nums[i] != 0)
            {
                i++;
            }
            i++;
            zeroCount--;
        }
    }
    maxLength = max(maxLength, j - i);
    return maxLength;
}
int main()
{
    vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;
    int maxLen = longestOnes(nums, k);
    cout << maxLen << endl;
}
