#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*Given a binary array nums, you should delete one element from it.
Return the size of the longest non-empty subarray containing only 1's in
the resulting array. Return 0 if there is no such subarray.*/
int longestOnes(vector<int> &nums)
{
    int i = 0;
    int j = 0;
    int zeroCount = 0;
    int n = nums.size();
    int maxLength = INT_MIN;
    while (j < n)
    {

        if (nums[j] == 0 && zeroCount < 1)
        {
            zeroCount++;
            j++;
        }
        else if (nums[j] == 1)
            j++;
        else if (zeroCount >= 1)
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
    return maxLength - 1;
}
int main()
{
    vector<int> nums = {0,1,1,1,0,1,1,0,1};

    int maxLen = longestOnes(nums);
    cout << maxLen << endl;
}