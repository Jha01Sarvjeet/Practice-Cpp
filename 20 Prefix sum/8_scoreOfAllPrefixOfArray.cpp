#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*We define the conversion array conver of an array arr as follows:

conver[i] = arr[i] + max(arr[0..i]) where max(arr[0..i]) is the maximum value of arr[j] over 0 <= j <= i.
We also define the score of an array arr as the sum of the values of the conversion array of arr.

Given a 0-indexed integer array nums of length n, return an array ans of length n where ans[i] is the score of the prefix nums[0..i].*/

vector<long long> findPrefixScore(vector<int> &nums)
{
    int n = nums.size();
    vector<long long> prefixScore(n);
    int maxi = nums[0];
    for (int i = 0; i < n; i++)
    {
        int currMax = nums[i];
        maxi = max(maxi, currMax);
        prefixScore[i] = nums[i] + maxi;
    }
    for (int i = 1; i < n; i++)
    {
        prefixScore[i] = prefixScore[i] + prefixScore[i - 1];
    }
    return prefixScore;
}
int main()
{
    vector<int> nums = {2,3,7,5,10};
    vector<long long> ans = findPrefixScore(nums);
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
}