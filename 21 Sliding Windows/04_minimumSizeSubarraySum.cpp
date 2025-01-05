#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*
Minimum Size Subarray Sum

Given an array of positive integers nums and a positive integer target, return the minimal
length of a subarray whose sum is greater than or equal to target. If there is no such subarray,
return 0 instead.
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
 */
// int minSubArrayLen(int target, vector<int> &nums)
// {
//     int n = nums.size();
//     int minLen = INT_MAX;
//     int sum = 0;
//     int i = 0;
//     int j = 0;

//     while (j < n)
//     {
//         sum = sum + nums[j];
//         while (sum >= target)
//         {
//             minLen = min((j - i + 1), minLen);
//             sum -= nums[i];
//             i++;
//         }
//         j++;
//     }
//     if (minLen == INT_MAX)
//         return 0;
//     return minLen;
// }

//ONe more approach
int minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();
    int minLen = INT_MAX;
    long long int sum = 0;
    int i = 0;
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        sum = sum + nums[i];
        if (sum >= target)
        {
            j = i;
            break;
        }
    }
    if(j==-1)return 0;
    minLen = min(j -i+ 1, minLen);
    while (j < n)
    {
        while (sum >= target)
        {
            minLen = min((j-i+1), minLen);
            sum -= nums[i];
            i++;
        }
        if(j+1<n){j++;
        sum+=nums[j];}
        else{
            break;
        }
    }
    return minLen;
}

int main()
{
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    int minLenght = minSubArrayLen(target, nums);
    cout << minLenght << endl;
}