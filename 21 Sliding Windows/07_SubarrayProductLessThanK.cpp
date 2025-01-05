#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*Given an array of integers nums and an integer k, return the number of contiguous subarrays where
the product of all the elements in the subarray is strictly less than k.
Input: nums = [10,5,2,6], k = 100
Output: 8
Explanation: The 8 subarrays that have product less than 100 are:
[10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.*/
int numSubarrayProductLessThanK(vector<int> &nums, int k)
{   if(k<=1)return 0;
    int n = nums.size();
    int count = 0;
    int prod = 1;
    int i = 0;
    int j = 0;
    while (j < n)
    {
        prod *= nums[j];
        while (prod >= k)
        {
            count += j - i;
            prod /= nums[i];
            i++;
        }
        j++;
    }
    while (i < n)
    {
        count += j - i;
        prod /= nums[i];
        i++;
    }

    return count;
}
int main()
{
    vector<int> arr = {10,5,2,6};
    int k = 100;
    int ans = numSubarrayProductLessThanK(arr, k);
    cout << ans << endl;
}